C-----THIS IS COMMON/INCLUDE FILE DPCO3D.INC-----
C     THIS IS COMMON FOR 3-D GRAPHICS
C
      CHARACTER*4 IVISSW
      CHARACTER*4 I3DPRO
C
CCCCC THE FOLLOWING 4 LINES WERE ADDED    SEPTEMBER 1993
      CHARACTER*4 FRAM3D
C
      CHARACTER*4 IPEDGC
      CHARACTER*4 IPEDGP
      CHARACTER*4 IPEDGR
      CHARACTER*4 IPEDCO
      CHARACTER*4 IPEDSW
C
      CHARACTER*4 IDEPGC
      CHARACTER*4 IDEPGP
      CHARACTER*4 IDEPGR
      CHARACTER*4 IDEPCO
C
      CHARACTER*4 IBSPGC
      CHARACTER*4 IBSPGP
      CHARACTER*4 IBSPGR
      CHARACTER*4 IBSPCO
      CHARACTER*4 IBSPSW
C
      CHARACTER*4 IDBSGC
      CHARACTER*4 IDBSGP
      CHARACTER*4 IDBSGR
      CHARACTER*4 IDBSCO
C
      CHARACTER*4 IBKPGC
      CHARACTER*4 IBKPGP
      CHARACTER*4 IBKPGR
      CHARACTER*4 IBKPCO
      CHARACTER*4 IBKPSW
C
      CHARACTER*4 IDBKGC
      CHARACTER*4 IDBKGP
      CHARACTER*4 IDBKGR
      CHARACTER*4 IDBKCO
C
      CHARACTER*4 ISDFGC
      CHARACTER*4 ISDFGP
      CHARACTER*4 ISDFGR
      CHARACTER*4 ISDFCO
      CHARACTER*4 ISDFSW
C
      CHARACTER*4 IDSDGC
      CHARACTER*4 IDSDGP
      CHARACTER*4 IDSDGR
      CHARACTER*4 IDSDCO
C
      DIMENSION IPEDC2(3)
C
C     COMMON FOR 3-D GENERAL SETTINGS
C
      COMMON /C3DGEN/
     1IVISSW,I3DPRO
C
      COMMON /R3DGEN/
     1AEYEXC,AEYEYC,AEYEZC,
     1AORIXC,AORIYC,AORIZC
C
CCCCC THE FOLLOWING 4 LINES WERE ADDED    SEPTEMBER 1993
C     COMMON FOR 3-D FRAME STYLE
C
      COMMON /CFRAST/
     1FRAM3D
C
C     COMMON FOR 3-D PEDESTAL ATTRIBUTES
C
      COMMON /CPEDES/
     1IPEDGC,IDEPGC,
     1IPEDGP,IDEPGP,
     1IPEDGR,IDEPGR,
     1IPEDCO,IDEPCO,
     1IPEDSW
C
      COMMON /RPEDES/
     1APEDSZ,ADEPSZ,
     1APEDBA,ADEPBA
C
      COMMON /IPEDES/
     1IPEDC2
C
C     COMMON FOR 3-D BASEPLANE ATTRIBUTES
C
      COMMON /CBASPL/
     1IBSPGC,IDBSGC,
     1IBSPGP,IDBSGP,
     1IBSPGR,IDBSGR,
     1IBSPCO,IDBSCO,
     1IBSPSW
C
C     COMMON FOR 3-D BACKPLANE ATTRIBUTES
C
      COMMON /CBAKPL/
     1IBKPGC,IDBKGC,
     1IBKPGP,IDBKGP,
     1IBKPGR,IDBKGR,
     1IBKPCO,IDBKCO,
     1IBKPSW
C
C     COMMON FOR 3-D SIDEFACE ATTRIBUTES
C
      COMMON /CSIDFA/
     1ISDFGC,IDSDGC,
     1ISDFGP,IDSDGP,
     1ISDFGR,IDSDGR,
     1ISDFCO,IDSDCO,
     1ISDFSW
C
C     COMMON FOR RAW 3-D DATA
C
      COMMON /R3DRAW/
     1X3DMIN,Y3DMIN,Z3DMIN,
     1X3DMAX,Y3DMAX,Z3DMAX,
     1X3DMID,Y3DMID,Z3DMID,
     1X3DRAN,Y3DRAN,Z3DRAN,
     1X3DEYE,Y3DEYE,Z3DEYE,
     1X3DORI,Y3DORI,Z3DORI,
     1D3DCXX,D3DCXY,D3DCXZ,
     1D3DCYX,D3DCYY,D3DCYZ,
     1D3DCZX,D3DCZY,D3DCZZ
C
