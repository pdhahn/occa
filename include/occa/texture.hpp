#ifndef OCCA_TEXTURE_HEADER
#define OCCA_TEXTURE_HEADER

// [REFACTOR] Make this part of device or something
namespace occa {
  struct textureInfo_t {
    void *arg;
    int dim;
    int bytesInEntry;
    uintptr_t w, h, d;
  };

  extern const int uint8FormatIndex;
  extern const int uint16FormatIndex;
  extern const int uint32FormatIndex;
  extern const int int8FormatIndex;
  extern const int int16FormatIndex;
  extern const int int32FormatIndex;
  extern const int halfFormatIndex;
  extern const int floatFormatIndex;

  extern const int sizeOfFormats[8];

  class formatType {
  private:
    int format_;
    int count_;

  public:
    formatType(const int format__, const int count__);

    formatType(const formatType &ft);
    formatType& operator = (const formatType &ft);

    template <occa::mode>
    void* format() const;

    int count() const;
    size_t bytes() const;
  };

  extern const int readOnly, readWrite;
  extern const occa::formatType uint8Format , uint8x2Format , uint8x4Format;
  extern const occa::formatType uint16Format, uint16x2Format, uint16x4Format;
  extern const occa::formatType uint32Format, uint32x2Format, uint32x4Format;
  extern const occa::formatType int8Format  , int8x2Format  , int8x4Format;
  extern const occa::formatType int16Format , int16x2Format , int16x4Format;
  extern const occa::formatType int32Format , int32x2Format , int32x4Format;
  extern const occa::formatType halfFormat  , halfx2Format  , halfx4Format;
  extern const occa::formatType floatFormat , floatx2Format , floatx4Format;
}

#endif
