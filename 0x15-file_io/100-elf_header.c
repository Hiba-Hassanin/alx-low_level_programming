#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

#define ELF_MAGIC "\x7fELF"

typedef struct {
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned int e_version;
	unsigned int e_entry;
	unsigned int e_phoff;
	unsigned int e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
} ElfHeader;

/**
 * read_header - reads the ELF header
 * @filename: the name of the file
 * @header: a pointer
*/

void read_header(const char *filename, ElfHeader *header)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	if (read(fd, header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		perror("read");
		close(fd);
		exit(98);
	}

	close(fd);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of argument
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	ElfHeader header;
	read_header(argv[1], &header);

	if (memcmp(header.e_ident, ELF_MAGIC, 4) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(98);
	}

	printf("Class: %s\n", header.e_ident[4] == 1 ? "32-bit" : "64-bit");
	printf("Data: %s\n", header.e_ident[5] == 1 ? "Little endian" : "Big endian");
	printf("Version: %u\n", header.e_ident[6]);
	printf("OS/ABI: %s\n", header.e_ident[7] == 0 ? "System V" : "Other");
	printf("ABI Version: %u\n", header.e_ident[8]);
	printf("Type: %u\n", header.e_type);
	printf("Entry point address: %#x\n", header.e_entry);

	return (0);
}
