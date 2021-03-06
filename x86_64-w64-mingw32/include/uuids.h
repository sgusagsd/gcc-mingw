/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef OUR_GUID_ENTRY
#define OUR_GUID_ENTRY(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8);
#endif

#define MEDIATYPE_NULL GUID_NULL
#define MEDIASUBTYPE_NULL GUID_NULL

OUR_GUID_ENTRY(MEDIASUBTYPE_None,0xe436eb8e,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIATYPE_Video,0x73646976,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Audio,0x73647561,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Text,0x73747874,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Midi,0x7364696D,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_Stream,0xe436eb83,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIATYPE_Interleaved,0x73766169,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_File,0x656c6966,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_ScriptCommand,0x73636d64,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_AUXLine21Data,0x670aea80,0x3a82,0x11d0,0xb7,0x9b,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(MEDIATYPE_VBI,0xf72a76e1,0xeb0a,0x11d0,0xac,0xe4,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(MEDIATYPE_Timecode,0x482dee3,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIATYPE_LMRT,0x74726c6d,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIATYPE_URL_STREAM,0x736c7275,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_CLPL,0x4C504C43,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YUYV,0x56595559,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_I420,0x30323449,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IYUV,0x56555949,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YVU9,0x39555659,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y411,0x31313459,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y41P,0x50313459,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YUY2,0x32595559,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_YVYU,0x55595659,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_UYVY,0x59565955,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Y211,0x31313259,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_CLJR,0x524a4c43,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IF09,0x39304649,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_CPLA,0x414c5043,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_MJPG,0x47504A4D,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_TVMJ,0x4A4D5654,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_WAKE,0x454B4157,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_CFCC,0x43434643,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IJPG,0x47504A49,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Plum,0x6D756C50,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_DVCS,0x53435644,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_DVSD,0x44535644,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_MDVF,0x4656444D,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB1,0xe436eb78,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB4,0xe436eb79,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB8,0xe436eb7a,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB565,0xe436eb7b,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB555,0xe436eb7c,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB24,0xe436eb7d,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB32,0xe436eb7e,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB1555,0x297c55af,0xe209,0x4cb3,0xb7,0x57,0xc7,0x6d,0x6b,0x9c,0x88,0xa8)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB4444,0x6e6415e6,0x5c24,0x425f,0x93,0xcd,0x80,0x10,0x2b,0x3d,0x1c,0xca)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB32,0x773c9ac0,0x3274,0x11d0,0xb7,0x24,0x0,0xaa,0x0,0x6c,0x1a,0x1)
OUR_GUID_ENTRY(MEDIASUBTYPE_A2R10G10B10,0x2f8bb76d,0xb644,0x4550,0xac,0xf3,0xd3,0x0c,0xaa,0x65,0xd5,0xc5)
OUR_GUID_ENTRY(MEDIASUBTYPE_A2B10G10R10,0x576f7893,0xbdf6,0x48c4,0x87,0x5f,0xae,0x7b,0x81,0x83,0x45,0x67)
OUR_GUID_ENTRY(MEDIASUBTYPE_AYUV,0x56555941,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_AI44,0x34344941,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IA44,0x34344149,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB32_D3D_DX7_RT,0x32335237,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB16_D3D_DX7_RT,0x36315237,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB32_D3D_DX7_RT,0x38384137,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB4444_D3D_DX7_RT,0x34344137,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB1555_D3D_DX7_RT,0x35314137,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB32_D3D_DX9_RT,0x32335239,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RGB16_D3D_DX9_RT,0x36315239,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB32_D3D_DX9_RT,0x38384139,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB4444_D3D_DX9_RT,0x34344139,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_ARGB1555_D3D_DX9_RT,0x35314139,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)

#define MEDIASUBTYPE_HASALPHA(mt) (((mt).subtype==MEDIASUBTYPE_ARGB4444) || ((mt).subtype==MEDIASUBTYPE_ARGB32) || ((mt).subtype==MEDIASUBTYPE_AYUV) || ((mt).subtype==MEDIASUBTYPE_AI44) || ((mt).subtype==MEDIASUBTYPE_IA44) || ((mt).subtype==MEDIASUBTYPE_ARGB1555) || ((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX9_RT))
#define MEDIASUBTYPE_HASALPHA7(mt) (((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX7_RT))
#define MEDIASUBTYPE_D3D_DX7_RT(mt) (((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_RGB32_D3D_DX7_RT) || ((mt).subtype==MEDIASUBTYPE_RGB16_D3D_DX7_RT))
#define MEDIASUBTYPE_HASALPHA9(mt) (((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX9_RT))
#define MEDIASUBTYPE_D3D_DX9_RT(mt) (((mt).subtype==MEDIASUBTYPE_ARGB32_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB4444_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_ARGB1555_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_RGB32_D3D_DX9_RT) || ((mt).subtype==MEDIASUBTYPE_RGB16_D3D_DX9_RT))

OUR_GUID_ENTRY(MEDIASUBTYPE_YV12,0x32315659,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_NV12,0x3231564E,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IMC1,0x31434D49,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IMC2,0x32434D49,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IMC3,0x33434D49,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IMC4,0x34434D49,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_S340,0x30343353,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_S342,0x32343353,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Overlay,0xe436eb7f,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Packet,0xe436eb80,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Payload,0xe436eb81,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1AudioPayload,0x00000050,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)
OUR_GUID_ENTRY(MEDIATYPE_MPEG1SystemStream,0xe436eb82,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1System,0xe436eb84,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1VideoCD,0xe436eb85,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Video,0xe436eb86,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_MPEG1Audio,0xe436eb87,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_Avi,0xe436eb88,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_Asf,0x3db80f90,0x9412,0x11d1,0xad,0xed,0x0,0x0,0xf8,0x75,0x4b,0x99)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTMovie,0xe436eb89,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTRpza,0x617a7072,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTSmc,0x20636d73,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTRle,0x20656c72,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_QTJpeg,0x6765706a,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_PCMAudio_Obsolete,0xe436eb8a,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_PCM,0x00000001,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_WAVE,0xe436eb8b,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_AU,0xe436eb8c,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_AIFF,0xe436eb8d,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(MEDIASUBTYPE_dvsd,0x64737664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_dvhd,0x64687664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_dvsl,0x6c737664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_dv25,0x35327664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_dv50,0x30357664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_dvh1,0x31687664,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_Line21_BytePair,0x6e8d4a22,0x310c,0x11d0,0xb7,0x9a,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(MEDIASUBTYPE_Line21_GOPPacket,0x6e8d4a23,0x310c,0x11d0,0xb7,0x9a,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(MEDIASUBTYPE_Line21_VBIRawData,0x6e8d4a24,0x310c,0x11d0,0xb7,0x9a,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(MEDIASUBTYPE_TELETEXT,0xf72a76e3,0xeb0a,0x11d0,0xac,0xe4,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(MEDIASUBTYPE_WSS,0x2791D576,0x8E7A,0x466F,0x9E,0x90,0x5D,0x3F,0x30,0x83,0x73,0x8B)
OUR_GUID_ENTRY(MEDIASUBTYPE_VPS,0xa1b3f620,0x9792,0x4d8d,0x81,0xa4,0x86,0xaf,0x25,0x77,0x20,0x90)
OUR_GUID_ENTRY(MEDIASUBTYPE_DRM_Audio,0x00000009,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_IEEE_FLOAT,0x00000003,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_DOLBY_AC3_SPDIF,0x00000092,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_RAW_SPORT,0x00000240,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_SPDIF_TAG_241h,0x00000241,0x0000,0x0010,0x80,0x00,0x00,0xaa,0x00,0x38,0x9b,0x71)
OUR_GUID_ENTRY(MEDIASUBTYPE_DssVideo,0xa0af4f81,0xe163,0x11d0,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(MEDIASUBTYPE_DssAudio,0xa0af4f82,0xe163,0x11d0,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(MEDIASUBTYPE_VPVideo,0x5a9b6a40,0x1a22,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(MEDIASUBTYPE_VPVBI,0x5a9b6a41,0x1a22,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(CLSID_CaptureGraphBuilder,0xBF87B6E0,0x8C27,0x11d0,0xB3,0xF0,0x0,0xAA,0x00,0x37,0x61,0xC5)
OUR_GUID_ENTRY(CLSID_CaptureGraphBuilder2,0xBF87B6E1,0x8C27,0x11d0,0xB3,0xF0,0x0,0xAA,0x00,0x37,0x61,0xC5)
OUR_GUID_ENTRY(CLSID_ProtoFilterGraph,0xe436ebb0,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_SystemClock,0xe436ebb1,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_FilterMapper,0xe436ebb2,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_FilterGraph,0xe436ebb3,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_FilterGraphNoThread,0xe436ebb8,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_MPEG1Doc,0xe4bbd160,0x4269,0x11ce,0x83,0x8d,0x0,0xaa,0x0,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_FileSource,0x701722e0,0x8ae3,0x11ce,0xa8,0x5c,0x00,0xaa,0x00,0x2f,0xea,0xb5)
OUR_GUID_ENTRY(CLSID_MPEG1PacketPlayer,0x26c25940,0x4ca9,0x11ce,0xa8,0x28,0x0,0xaa,0x0,0x2f,0xea,0xb5)
OUR_GUID_ENTRY(CLSID_MPEG1Splitter,0x336475d0,0x942a,0x11ce,0xa8,0x70,0x00,0xaa,0x00,0x2f,0xea,0xb5)
OUR_GUID_ENTRY(CLSID_CMpegVideoCodec,0xfeb50740,0x7bef,0x11ce,0x9b,0xd9,0x0,0x0,0xe2,0x2,0x59,0x9c)
OUR_GUID_ENTRY(CLSID_CMpegAudioCodec,0x4a2286e0,0x7bef,0x11ce,0x9b,0xd9,0x0,0x0,0xe2,0x2,0x59,0x9c)
OUR_GUID_ENTRY(CLSID_TextRender,0xe30629d3,0x27e5,0x11ce,0x87,0x5d,0x0,0x60,0x8c,0xb7,0x80,0x66)
OUR_GUID_ENTRY(CLSID_InfTee,0xf8388a40,0xd5bb,0x11d0,0xbe,0x5a,0x0,0x80,0xc7,0x6,0x56,0x8e)
OUR_GUID_ENTRY(CLSID_AviSplitter,0x1b544c20,0xfd0b,0x11ce,0x8c,0x63,0x0,0xaa,0x00,0x44,0xb5,0x1e)
OUR_GUID_ENTRY(CLSID_AviReader,0x1b544c21,0xfd0b,0x11ce,0x8c,0x63,0x0,0xaa,0x00,0x44,0xb5,0x1e)
OUR_GUID_ENTRY(CLSID_VfwCapture,0x1b544c22,0xfd0b,0x11ce,0x8c,0x63,0x0,0xaa,0x00,0x44,0xb5,0x1e)
OUR_GUID_ENTRY(CLSID_CaptureProperties,0x1B544c22,0xFD0B,0x11ce,0x8C,0x63,0x00,0xAA,0x00,0x44,0xB5,0x1F)
OUR_GUID_ENTRY(CLSID_FGControl,0xe436ebb4,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_MOVReader,0x44584800,0xf8ee,0x11ce,0xb2,0xd4,0x00,0xdd,0x1,0x10,0x1b,0x85)
OUR_GUID_ENTRY(CLSID_QuickTimeParser,0xd51bd5a0,0x7548,0x11cf,0xa5,0x20,0x0,0x80,0xc7,0x7e,0xf5,0x8a)
OUR_GUID_ENTRY(CLSID_QTDec,0xfdfe9681,0x74a3,0x11d0,0xaf,0xa7,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_AVIDoc,0xd3588ab0,0x0781,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0xb,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_VideoRenderer,0x70e102b0,0x5556,0x11ce,0x97,0xc0,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_Colour,0x1643e180,0x90f5,0x11ce,0x97,0xd5,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_Dither,0x1da08500,0x9edc,0x11cf,0xbc,0x10,0x00,0xaa,0x00,0xac,0x74,0xf6)
OUR_GUID_ENTRY(CLSID_ModexRenderer,0x7167665,0x5011,0x11cf,0xbf,0x33,0x0,0xaa,0x0,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_AudioRender,0xe30629d1,0x27e5,0x11ce,0x87,0x5d,0x0,0x60,0x8c,0xb7,0x80,0x66)
OUR_GUID_ENTRY(CLSID_AudioProperties,0x05589faf,0xc356,0x11ce,0xbf,0x01,0x0,0xaa,0x0,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_DSoundRender,0x79376820,0x07D0,0x11CF,0xA2,0x4D,0x0,0x20,0xAF,0xD7,0x97,0x67)
OUR_GUID_ENTRY(CLSID_AudioRecord,0xe30629d2,0x27e5,0x11ce,0x87,0x5d,0x0,0x60,0x8c,0xb7,0x80,0x66)
OUR_GUID_ENTRY(CLSID_AudioInputMixerProperties,0x2ca8ca52,0x3c3f,0x11d2,0xb7,0x3d,0x0,0xc0,0x4f,0xb6,0xbd,0x3d)
OUR_GUID_ENTRY(CLSID_AVIDec,0xcf49d4e0,0x1115,0x11ce,0xb0,0x3a,0x0,0x20,0xaf,0xb,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_AVIDraw,0xa888df60,0x1e90,0x11cf,0xac,0x98,0x0,0xaa,0x0,0x4c,0xf,0xa9)
OUR_GUID_ENTRY(CLSID_ACMWrapper,0x6a08cf80,0x0e18,0x11cf,0xa2,0x4d,0x0,0x20,0xaf,0xd7,0x97,0x67)
OUR_GUID_ENTRY(CLSID_AsyncReader,0xe436ebb5,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_URLReader,0xe436ebb6,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_PersistMonikerPID,0xe436ebb7,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70)
OUR_GUID_ENTRY(CLSID_AVICo,0xd76e2820,0x1563,0x11cf,0xac,0x98,0x0,0xaa,0x0,0x4c,0xf,0xa9)
OUR_GUID_ENTRY(CLSID_FileWriter,0x8596e5f0,0xda5,0x11d0,0xbd,0x21,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AviDest,0xe2510970,0xf137,0x11ce,0x8b,0x67,0x0,0xaa,0x0,0xa3,0xf1,0xa6)
OUR_GUID_ENTRY(CLSID_AviMuxProptyPage,0xc647b5c0,0x157c,0x11d0,0xbd,0x23,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AviMuxProptyPage1,0xa9ae910,0x85c0,0x11d0,0xbd,0x42,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AVIMIDIRender,0x07b65360,0xc445,0x11ce,0xaf,0xde,0x00,0xaa,0x00,0x6c,0x14,0xf4)
OUR_GUID_ENTRY(CLSID_WMAsfReader,0x187463a0,0x5bb7,0x11d3,0xac,0xbe,0x0,0x80,0xc7,0x5e,0x24,0x6e)
OUR_GUID_ENTRY(CLSID_WMAsfWriter,0x7c23220e,0x55bb,0x11d3,0x8b,0x16,0x0,0xc0,0x4f,0xb6,0xbd,0x3d)
OUR_GUID_ENTRY(CLSID_MPEG2Demultiplexer,0xafb6c280,0x2c41,0x11d3,0x8a,0x60,0x00,0x00,0xf8,0x1e,0x0e,0x4a)
OUR_GUID_ENTRY(CLSID_MMSPLITTER,0x3ae86b20,0x7be8,0x11d1,0xab,0xe6,0x00,0xa0,0xc9,0x05,0xf3,0x75)
OUR_GUID_ENTRY(CLSID_StreamBufferSink,0x2db47ae5,0xcf39,0x43c2,0xb4,0xd6,0xc,0xd8,0xd9,0x9,0x46,0xf4)
OUR_GUID_ENTRY(CLSID_StreamBufferSource,0xc9f5fe02,0xf851,0x4eb5,0x99,0xee,0xad,0x60,0x2a,0xf1,0xe6,0x19)
OUR_GUID_ENTRY(CLSID_StreamBufferConfig,0xfa8a68b2,0xc864,0x4ba2,0xad,0x53,0xd3,0x87,0x6a,0x87,0x49,0x4b)
OUR_GUID_ENTRY(CLSID_Mpeg2VideoStreamAnalyzer,0x6cfad761,0x735d,0x4aa5,0x8a,0xfc,0xaf,0x91,0xa7,0xd6,0x1e,0xba)
OUR_GUID_ENTRY(CLSID_StreamBufferRecordingAttributes,0xccaa63ac,0x1057,0x4778,0xae,0x92,0x12,0x6,0xab,0x9a,0xce,0xe6)
OUR_GUID_ENTRY(CLSID_StreamBufferComposeRecording,0xd682c4ba,0xa90a,0x42fe,0xb9,0xe1,0x3,0x10,0x98,0x49,0xc4,0x23)
OUR_GUID_ENTRY(CLSID_DVVideoCodec,0xb1b77c00,0xc3e4,0x11cf,0xaf,0x79,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_DVVideoEnc,0x13aa3650,0xbb6f,0x11d0,0xaf,0xb9,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_DVSplitter,0x4eb31670,0x9fc6,0x11cf,0xaf,0x6e,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_DVMux,0x129d7e40,0xc10d,0x11d0,0xaf,0xb9,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_SeekingPassThru,0x60af76c,0x68dd,0x11d0,0x8f,0xc1,0x0,0xc0,0x4f,0xd9,0x18,0x9d)
OUR_GUID_ENTRY(CLSID_Line21Decoder,0x6e8d4a20,0x310c,0x11d0,0xb7,0x9a,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(CLSID_Line21Decoder2,0xe4206432,0x01a1,0x4bee,0xb3,0xe1,0x37,0x02,0xc8,0xed,0xc5,0x74)
OUR_GUID_ENTRY(CLSID_OverlayMixer,0xcd8743a1,0x3736,0x11d0,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(CLSID_VBISurfaces,0x814b9800,0x1c88,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(CLSID_WSTDecoder,0x70bc06e0,0x5666,0x11d3,0xa1,0x84,0x0,0x10,0x5a,0xef,0x9f,0x33)
OUR_GUID_ENTRY(CLSID_MjpegDec,0x301056d0,0x6dff,0x11d2,0x9e,0xeb,0x0,0x60,0x8,0x3,0x9e,0x37)
OUR_GUID_ENTRY(CLSID_MJPGEnc,0xb80ab0a0,0x7416,0x11d2,0x9e,0xeb,0x0,0x60,0x8,0x3,0x9e,0x37)
OUR_GUID_ENTRY(CLSID_SystemDeviceEnum,0x62BE5D10,0x60EB,0x11d0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_CDeviceMoniker,0x4315D437,0x5B8C,0x11d0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_VideoInputDeviceCategory,0x860BB310,0x5D01,0x11d0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_CVidCapClassManager,0x860BB310,0x5D01,0x11d0,0xBD,0x3B,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_LegacyAmFilterCategory,0x083863F1,0x70DE,0x11d0,0xBD,0x40,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_CQzFilterClassManager,0x083863F1,0x70DE,0x11d0,0xBD,0x40,0x00,0xA0,0xC9,0x11,0xCE,0x86)
OUR_GUID_ENTRY(CLSID_VideoCompressorCategory,0x33d9a760,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_CIcmCoClassManager,0x33d9a760,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AudioCompressorCategory,0x33d9a761,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_CAcmCoClassManager,0x33d9a761,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AudioInputDeviceCategory,0x33d9a762,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_CWaveinClassManager,0x33d9a762,0x90c8,0x11d0,0xbd,0x43,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_AudioRendererCategory,0xe0f158e1,0xcb04,0x11d0,0xbd,0x4e,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_CWaveOutClassManager,0xe0f158e1,0xcb04,0x11d0,0xbd,0x4e,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_MidiRendererCategory,0x4EfE2452,0x168A,0x11d1,0xBC,0x76,0x0,0xc0,0x4F,0xB9,0x45,0x3B)
OUR_GUID_ENTRY(CLSID_CMidiOutClassManager,0x4EfE2452,0x168A,0x11d1,0xBC,0x76,0x0,0xc0,0x4F,0xB9,0x45,0x3B)
OUR_GUID_ENTRY(CLSID_TransmitCategory,0xcc7bfb41,0xf175,0x11d1,0xa3,0x92,0x0,0xe0,0x29,0x1f,0x39,0x59)
OUR_GUID_ENTRY(CLSID_DeviceControlCategory,0xcc7bfb46,0xf175,0x11d1,0xa3,0x92,0x0,0xe0,0x29,0x1f,0x39,0x59)
OUR_GUID_ENTRY(CLSID_ActiveMovieCategories,0xda4e3da0,0xd07d,0x11d0,0xbd,0x50,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_DVDHWDecodersCategory,0x2721AE20,0x7E70,0x11D0,0xA5,0xD6,0x28,0xDB,0x04,0xC1,0x00,0x00)
OUR_GUID_ENTRY(CLSID_MediaEncoderCategory,0x7D22E920,0x5CA9,0x4787,0x8C,0x2B,0xA6,0x77,0x9B,0xD1,0x17,0x81)
OUR_GUID_ENTRY(CLSID_MediaMultiplexerCategory,0x236C9559,0xADCE,0x4736,0xBF,0x72,0xBA,0xB3,0x4E,0x39,0x21,0x96)
OUR_GUID_ENTRY(CLSID_FilterMapper2,0xcda42200,0xbd88,0x11d0,0xbd,0x4e,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_MemoryAllocator,0x1e651cc0,0xb199,0x11d0,0x82,0x12,0x00,0xc0,0x4f,0xc3,0x2c,0x45)
OUR_GUID_ENTRY(CLSID_MediaPropertyBag,0xcdbd8d00,0xc193,0x11d0,0xbd,0x4e,0x0,0xa0,0xc9,0x11,0xce,0x86)
OUR_GUID_ENTRY(CLSID_DvdGraphBuilder,0xFCC152B7,0xF372,0x11d0,0x8E,0x00,0x00,0xC0,0x4F,0xD7,0xC0,0x8B)
OUR_GUID_ENTRY(CLSID_DVDNavigator,0x9b8c4620,0x2c1a,0x11d0,0x84,0x93,0x0,0xa0,0x24,0x38,0xad,0x48)
OUR_GUID_ENTRY(CLSID_DVDState,0xf963c5cf,0xa659,0x4a93,0x96,0x38,0xca,0xf3,0xcd,0x27,0x7d,0x13)
OUR_GUID_ENTRY(CLSID_SmartTee,0xcc58e280,0x8aa1,0x11d1,0xb3,0xf1,0x0,0xaa,0x0,0x37,0x61,0xc5)
OUR_GUID_ENTRY(FORMAT_None,0x0F6417D6,0xc318,0x11d0,0xa4,0x3f,0x00,0xa0,0xc9,0x22,0x31,0x96)
OUR_GUID_ENTRY(FORMAT_VideoInfo,0x05589f80,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(FORMAT_VideoInfo2,0xf72a76A0,0xeb0a,0x11d0,0xac,0xe4,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(FORMAT_WaveFormatEx,0x05589f81,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(FORMAT_MPEGVideo,0x05589f82,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(FORMAT_MPEGStreams,0x05589f83,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(FORMAT_DvInfo,0x05589f84,0xc356,0x11ce,0xbf,0x01,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_DirectDrawProperties,0x944d4c00,0xdd52,0x11ce,0xbf,0x0e,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(CLSID_PerformanceProperties,0x59ce6880,0xacf8,0x11cf,0xb5,0x6e,0x00,0x80,0xc7,0xc4,0xb6,0x8a)
OUR_GUID_ENTRY(CLSID_QualityProperties,0x418afb70,0xf8b8,0x11ce,0xaa,0xc6,0x00,0x20,0xaf,0x0b,0x99,0xa3)
OUR_GUID_ENTRY(IID_IBaseVideoMixer,0x61ded640,0xe912,0x11ce,0xa0,0x99,0x00,0xaa,0x00,0x47,0x9a,0x58)
OUR_GUID_ENTRY(IID_IDirectDrawVideo,0x36d39eb0,0xdd75,0x11ce,0xbf,0x0e,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(IID_IQualProp,0x1bd0ecb0,0xf8e2,0x11ce,0xaa,0xc6,0x00,0x20,0xaf,0x0b,0x99,0xa3)
OUR_GUID_ENTRY(CLSID_VPObject,0xce292861,0xfc88,0x11d0,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IVPObject,0xce292862,0xfc88,0x11d0,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IVPControl,0x25df12c1,0x3de0,0x11d1,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(CLSID_VPVBIObject,0x814b9801,0x1c88,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(IID_IVPVBIObject,0x814b9802,0x1c88,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(IID_IVPConfig,0xbc29a660,0x30e3,0x11d0,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IVPNotify,0xc76794a1,0xd6c5,0x11d0,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IVPNotify2,0xebf47183,0x8764,0x11d1,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IVPVBIConfig,0xec529b00,0x1a1f,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(IID_IVPVBINotify,0xec529b01,0x1a1f,0x11d1,0xba,0xd9,0x0,0x60,0x97,0x44,0x11,0x1a)
OUR_GUID_ENTRY(IID_IMixerPinConfig,0x593cdde1,0x759,0x11d1,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
OUR_GUID_ENTRY(IID_IMixerPinConfig2,0xebf47182,0x8764,0x11d1,0x9e,0x69,0x0,0xc0,0x4f,0xd7,0xc1,0x5b)
#ifndef __DDRAW_INCLUDED__
OUR_GUID_ENTRY(CLSID_DirectDraw,0xD7B70EE0,0x4340,0x11CF,0xB0,0x63,0x00,0x20,0xAF,0xC2,0xCD,0x35)
OUR_GUID_ENTRY(CLSID_DirectDrawClipper,0x593817A0,0x7DB3,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xb9,0x33,0x56)
OUR_GUID_ENTRY(IID_IDirectDraw,0x6C14DB80,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60)
OUR_GUID_ENTRY(IID_IDirectDraw2,0xB3A6F3E0,0x2B43,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56)
OUR_GUID_ENTRY(IID_IDirectDrawSurface,0x6C14DB81,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60)
OUR_GUID_ENTRY(IID_IDirectDrawSurface2,0x57805885,0x6eec,0x11cf,0x94,0x41,0xa8,0x23,0x03,0xc1,0x0e,0x27)
OUR_GUID_ENTRY(IID_IDirectDrawSurface3,0xDA044E00,0x69B2,0x11D0,0xA1,0xD5,0x00,0xAA,0x00,0xB8,0xDF,0xBB)
OUR_GUID_ENTRY(IID_IDirectDrawSurface4,0x0B2B8630,0xAD35,0x11D0,0x8E,0xA6,0x00,0x60,0x97,0x97,0xEA,0x5B)
OUR_GUID_ENTRY(IID_IDirectDrawSurface7,0x06675a80,0x3b9b,0x11d2,0xb9,0x2f,0x00,0x60,0x97,0x97,0xea,0x5b)
OUR_GUID_ENTRY(IID_IDirectDrawPalette,0x6C14DB84,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60)
OUR_GUID_ENTRY(IID_IDirectDrawClipper,0x6C14DB85,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60)
OUR_GUID_ENTRY(IID_IDirectDrawColorControl,0x4B9F0EE0,0x0D7E,0x11D0,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8)
#endif
#ifndef __DVP_INCLUDED__
OUR_GUID_ENTRY(IID_IDDVideoPortContainer,0x6C142760,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60)
#endif
#ifndef __DDKM_INCLUDED__
OUR_GUID_ENTRY(IID_IDirectDrawKernel,0x8D56C120,0x6A08,0x11D0,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8)
OUR_GUID_ENTRY(IID_IDirectDrawSurfaceKernel,0x60755DA0,0x6A40,0x11D0,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8)
#endif
OUR_GUID_ENTRY(CLSID_ModexProperties,0x0618aa30,0x6bc4,0x11cf,0xbf,0x36,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(IID_IFullScreenVideo,0xdd1d7110,0x7836,0x11cf,0xbf,0x47,0x00,0xaa,0x00,0x55,0x59,0x5a)
OUR_GUID_ENTRY(IID_IFullScreenVideoEx,0x53479470,0xf1dd,0x11cf,0xbc,0x42,0x00,0xaa,0x00,0xac,0x74,0xf6)
OUR_GUID_ENTRY(CLSID_DVDecPropertiesPage,0x101193c0,0xbfe,0x11d0,0xaf,0x91,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_DVEncPropertiesPage,0x4150f050,0xbb6f,0x11d0,0xaf,0xb9,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(CLSID_DVMuxPropertyPage,0x4db880e0,0xc10d,0x11d0,0xaf,0xb9,0x0,0xaa,0x0,0xb6,0x7a,0x42)
OUR_GUID_ENTRY(IID_IAMDirectSound,0x546f4260,0xd53e,0x11cf,0xb3,0xf0,0x0,0xaa,0x0,0x37,0x61,0xc5)
OUR_GUID_ENTRY(IID_IMpegAudioDecoder,0xb45dd570,0x3c77,0x11d1,0xab,0xe1,0x00,0xa0,0xc9,0x05,0xf3,0x75)
OUR_GUID_ENTRY(IID_IAMLine21Decoder,0x6e8d4a21,0x310c,0x11d0,0xb7,0x9a,0x0,0xaa,0x0,0x37,0x67,0xa7)
OUR_GUID_ENTRY(IID_IAMWstDecoder,0xc056de21,0x75c2,0x11d3,0xa1,0x84,0x0,0x10,0x5a,0xef,0x9f,0x33)
OUR_GUID_ENTRY(CLSID_WstDecoderPropertyPage,0x4e27f80,0x91e4,0x11d3,0xa1,0x84,0x0,0x10,0x5a,0xef,0x9f,0x33)
OUR_GUID_ENTRY(FORMAT_AnalogVideo,0x482dde0,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIATYPE_AnalogVideo,0x482dde1,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_NTSC_M,0x482dde2,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_B,0x482dde5,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_D,0x482dde6,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_G,0x482dde7,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_H,0x482dde8,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_I,0x482dde9,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_M,0x482ddea,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_N,0x482ddeb,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_PAL_N_COMBO,0x482ddec,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_B,0x482ddf0,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_D,0x482ddf1,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_G,0x482ddf2,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_H,0x482ddf3,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_K,0x482ddf4,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_K1,0x482ddf5,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIASUBTYPE_AnalogVideo_SECAM_L,0x482ddf6,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(MEDIATYPE_AnalogAudio,0x482dee1,0x7817,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)

#include "ksuuids.h"

OUR_GUID_ENTRY(TIME_FORMAT_NONE,0L,0,0,0,0,0,0,0,0,0,0)
OUR_GUID_ENTRY(TIME_FORMAT_FRAME,0x7b785570,0x8c82,0x11cf,0xbc,0xc,0x0,0xaa,0x0,0xac,0x74,0xf6)
OUR_GUID_ENTRY(TIME_FORMAT_BYTE,0x7b785571,0x8c82,0x11cf,0xbc,0xc,0x0,0xaa,0x0,0xac,0x74,0xf6)
OUR_GUID_ENTRY(TIME_FORMAT_SAMPLE,0x7b785572,0x8c82,0x11cf,0xbc,0xc,0x0,0xaa,0x0,0xac,0x74,0xf6)
OUR_GUID_ENTRY(TIME_FORMAT_FIELD,0x7b785573,0x8c82,0x11cf,0xbc,0xc,0x0,0xaa,0x0,0xac,0x74,0xf6)
OUR_GUID_ENTRY(TIME_FORMAT_MEDIA_TIME,0x7b785574,0x8c82,0x11cf,0xbc,0xc,0x0,0xaa,0x0,0xac,0x74,0xf6)
OUR_GUID_ENTRY(AMPROPSETID_Pin,0x9b00f101,0x1567,0x11d1,0xb3,0xf1,0x0,0xaa,0x0,0x37,0x61,0xc5)
OUR_GUID_ENTRY(PIN_CATEGORY_CAPTURE,0xfb6c4281,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_PREVIEW,0xfb6c4282,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_ANALOGVIDEOIN,0xfb6c4283,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_VBI,0xfb6c4284,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_VIDEOPORT,0xfb6c4285,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_NABTS,0xfb6c4286,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_EDS,0xfb6c4287,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_TELETEXT,0xfb6c4288,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_CC,0xfb6c4289,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_STILL,0xfb6c428a,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_TIMECODE,0xfb6c428b,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(PIN_CATEGORY_VIDEOPORT_VBI,0xfb6c428c,0x0353,0x11d1,0x90,0x5f,0x00,0x00,0xc0,0xcc,0x16,0xba)
OUR_GUID_ENTRY(LOOK_UPSTREAM_ONLY,0xac798be0,0x98e3,0x11d1,0xb3,0xf1,0x0,0xaa,0x0,0x37,0x61,0xc5)
OUR_GUID_ENTRY(LOOK_DOWNSTREAM_ONLY,0xac798be1,0x98e3,0x11d1,0xb3,0xf1,0x0,0xaa,0x0,0x37,0x61,0xc5)
OUR_GUID_ENTRY(CLSID_TVTunerFilterPropertyPage,0x266eee41,0x6c63,0x11cf,0x8a,0x3,0x0,0xaa,0x0,0x6e,0xcb,0x65)
OUR_GUID_ENTRY(CLSID_CrossbarFilterPropertyPage,0x71f96461,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_TVAudioFilterPropertyPage,0x71f96463,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_VideoProcAmpPropertyPage,0x71f96464,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_CameraControlPropertyPage,0x71f96465,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_AnalogVideoDecoderPropertyPage,0x71f96466,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_VideoStreamConfigPropertyPage,0x71f96467,0x78f3,0x11d0,0xa1,0x8c,0x0,0xa0,0xc9,0x11,0x89,0x56)
OUR_GUID_ENTRY(CLSID_AudioRendererAdvancedProperties,0x37e92a92,0xd9aa,0x11d2,0xbf,0x84,0x8e,0xf2,0xb1,0x55,0x5a,0xed)
OUR_GUID_ENTRY(CLSID_VideoMixingRenderer,0xB87BEB7B,0x8D29,0x423f,0xAE,0x4D,0x65,0x82,0xC1,0x01,0x75,0xAC)
OUR_GUID_ENTRY(CLSID_VideoRendererDefault,0x6BC1CFFA,0x8FC1,0x4261,0xAC,0x22,0xCF,0xB4,0xCC,0x38,0xDB,0x50)
OUR_GUID_ENTRY(CLSID_AllocPresenter,0x99d54f63,0x1a69,0x41ae,0xaa,0x4d,0xc9,0x76,0xeb,0x3f,0x07,0x13)
OUR_GUID_ENTRY(CLSID_AllocPresenterDDXclMode,0x4444ac9e,0x242e,0x471b,0xa3,0xc7,0x45,0xdc,0xd4,0x63,0x52,0xbc)
OUR_GUID_ENTRY(CLSID_VideoPortManager,0x6f26a6cd,0x967b,0x47fd,0x87,0x4a,0x7a,0xed,0x2c,0x9d,0x25,0xa2)
OUR_GUID_ENTRY(CLSID_VideoMixingRenderer9,0x51b4abf3,0x748f,0x4e3b,0xa2,0x76,0xc8,0x28,0x33,0x0e,0x92,0x6a)
OUR_GUID_ENTRY(CLSID_ATSCNetworkProvider,0x0dad2fdd,0x5fd7,0x11d3,0x8f,0x50,0x00,0xc0,0x4f,0x79,0x71,0xe2)
OUR_GUID_ENTRY(CLSID_ATSCNetworkPropertyPage,0xe3444d16,0x5ac4,0x4386,0x88,0xdf,0x13,0xfd,0x23,0x0e,0x1d,0xda)
OUR_GUID_ENTRY(CLSID_DVBSNetworkProvider,0xfa4b375a,0x45b4,0x4d45,0x84,0x40,0x26,0x39,0x57,0xb1,0x16,0x23)
OUR_GUID_ENTRY(CLSID_DVBTNetworkProvider,0x216c62df,0x6d7f,0x4e9a,0x85,0x71,0x5,0xf1,0x4e,0xdb,0x76,0x6a)
OUR_GUID_ENTRY(CLSID_DVBCNetworkProvider,0xdc0c0fe7,0x485,0x4266,0xb9,0x3f,0x68,0xfb,0xf8,0xe,0xd8,0x34)
OUR_GUID_ENTRY(CLSID_DShowTVEFilter,0x05500280,0xFAA5,0x4DF9,0x82,0x46,0xBF,0xC2,0x3A,0xC5,0xCE,0xA8)
OUR_GUID_ENTRY(CLSID_TVEFilterTuneProperties,0x05500281,0xFAA5,0x4DF9,0x82,0x46,0xBF,0xC2,0x3A,0xC5,0xCE,0xA8)
OUR_GUID_ENTRY(CLSID_TVEFilterCCProperties,0x05500282,0xFAA5,0x4DF9,0x82,0x46,0xBF,0xC2,0x3A,0xC5,0xCE,0xA8)
OUR_GUID_ENTRY(CLSID_TVEFilterStatsProperties,0x05500283,0xFAA5,0x4DF9,0x82,0x46,0xBF,0xC2,0x3A,0xC5,0xCE,0xA8)
OUR_GUID_ENTRY(CLSID_IVideoEncoderProxy,0xb43c4eec,0x8c32,0x4791,0x91,0x2,0x50,0x8a,0xda,0x5e,0xe8,0xe7)
OUR_GUID_ENTRY(CLSID_ICodecAPIProxy,0x7ff0997a,0x1999,0x4286,0xa7,0x3c,0x62,0x2b,0x88,0x14,0xe7,0xeb)
OUR_GUID_ENTRY(CLSID_IVideoEncoderCodecAPIProxy,0xb05dabd9,0x56e5,0x4fdc,0xaf,0xa4,0x8a,0x47,0xe9,0x1f,0x1c,0x9c)

#ifndef __ENCODER_API_GUIDS__
#define __ENCODER_API_GUIDS__
OUR_GUID_ENTRY(ENCAPIPARAM_BITRATE,0x49cc4c43,0xca83,0x4ad4,0xa9,0xaf,0xf3,0x69,0x6a,0xf6,0x66,0xdf)
OUR_GUID_ENTRY(ENCAPIPARAM_PEAK_BITRATE,0x703f16a9,0x3d48,0x44a1,0xb0,0x77,0x1,0x8d,0xff,0x91,0x5d,0x19)
OUR_GUID_ENTRY(ENCAPIPARAM_BITRATE_MODE,0xee5fb25c,0xc713,0x40d1,0x9d,0x58,0xc0,0xd7,0x24,0x1e,0x25,0xf)
OUR_GUID_ENTRY(CODECAPI_CHANGELISTS,0x62b12acf,0xf6b0,0x47d9,0x94,0x56,0x96,0xf2,0x2c,0x4e,0x0b,0x9d)
OUR_GUID_ENTRY(CODECAPI_VIDEO_ENCODER,0x7112e8e1,0x3d03,0x47ef,0x8e,0x60,0x03,0xf1,0xcf,0x53,0x73,0x01)
OUR_GUID_ENTRY(CODECAPI_AUDIO_ENCODER,0xb9d19a3e,0xf897,0x429c,0xbc,0x46,0x81,0x38,0xb7,0x27,0x2b,0x2d)
OUR_GUID_ENTRY(CODECAPI_SETALLDEFAULTS,0x6c5e6a7c,0xacf8,0x4f55,0xa9,0x99,0x1a,0x62,0x81,0x09,0x05,0x1b)
OUR_GUID_ENTRY(CODECAPI_ALLSETTINGS,0x6a577e92,0x83e1,0x4113,0xad,0xc2,0x4f,0xce,0xc3,0x2f,0x83,0xa1)
OUR_GUID_ENTRY(CODECAPI_SUPPORTSEVENTS,0x0581af97,0x7693,0x4dbd,0x9d,0xca,0x3f,0x9e,0xbd,0x65,0x85,0xa1)
OUR_GUID_ENTRY(CODECAPI_CURRENTCHANGELIST,0x1cb14e83,0x7d72,0x4657,0x83,0xfd,0x47,0xa2,0xc5,0xb9,0xd1,0x3d)
#endif

#undef OUR_GUID_ENTRY
