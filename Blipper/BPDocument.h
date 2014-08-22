//
//  BPDocument.h
//  Blipper
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface BPDocument : NSDocument

@property (strong) IBOutlet NSWindow *docWindow;

@property (weak) IBOutlet IKImageView *imageView;
@property (weak) IBOutlet NSTextField *sizeField;
@property (weak) IBOutlet NSTextField *coordinatesField;
@property CGImageRef BLPImage;
@property (strong) IBOutlet NSView *formatView;

- (IBAction)changeSelectedTool:(id)sender;
- (IBAction)changeZoom:(id)sender;
- (IBAction)changeRotation:(id)sender;
- (IBAction)showExportSheet:(id)sender;

- (void)exportImageToURL:(NSURL *)url;

@end
