//
//  BLPImageRep.h
//  Blipper
//

#import <Cocoa/Cocoa.h>

@interface BLPImageRep : NSImageRep

typedef enum BLPFormat
{
    BLPFormatPalettized = 1,
    BLPFormatDXT = 2,
    BLPFormatPlain = 3,
} BLPFormat;

+ (id)imageRepWithData:(NSData *)data;
- (CGImageRef)CGImage;

+ (NSData *)BLPWithData:(NSData *)data type:(BLPFormat)type size:(NSSize)size;

@end
