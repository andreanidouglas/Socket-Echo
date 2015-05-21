#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/udp.h>

#define TAMANHO_PACOTE 8192
#define MTU
struct ipheader {
    unsigned char      iph_ihl:5, iph_ver:4;
    unsigned char      iph_tos;
    unsigned short int iph_len;
    unsigned short int iph_ident;
    unsigned char      iph_flag;
    unsigned short int iph_offset;
    unsigned char      iph_ttl;
    unsigned char      iph_protocol;
    unsigned short int iph_chksum;
    unsigned int       iph_sourceip;
    unsigned int       iph_destip;
};

struct icmp_header {
    unsigned char      type;
    unsigned char      code;
    unsigned short int checksum;
    unsigned short int identifier;
    unsigned short int sequence;
    char               data[MTU];
}

unsigned short calc_checksum(unsigned short *buffer, int length);
