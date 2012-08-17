//
//  PXCanvasWindowController_IBActions.h
//  Pixen
//
//  Copyright 2005-2012 Pixen Project. All rights reserved.
//

#import "PXCanvasWindowController.h"
#import "PXGridSettingsController.h"

@interface PXCanvasWindowController (IBActions) < PXGridSettingsPrompterDelegate >

- (IBAction)rotateLayerCounterclockwise:(id)sender;
- (IBAction)rotateLayerClockwise:(id)sender;
- (IBAction)rotateLayer180:(id)sender;
- (IBAction)rotateSelectionCounterclockwise:(id)sender;
- (IBAction)rotateSelectionClockwise:(id)sender;
- (IBAction)rotateSelection180:(id)sender;

- (IBAction)resizeCanvas:(id)sender;
- (IBAction)scaleCanvas:(id)sender;
- (IBAction)increaseOpacity:(id)sender;
- (IBAction)decreaseOpacity:(id)sender;
- (IBAction)duplicateDocument:(id)sender;
- (IBAction)mergeDown:(id)sender;
- (IBAction)promoteSelection:(id)sender;
- (IBAction)newLayer:(id)sender;
- (IBAction)deleteLayer:(id)sender;
- (IBAction)crop:(id)sender;
- (IBAction)flipHorizontally:(id)sender;
- (IBAction)flipVertically:(id)sender;
- (IBAction)flipLayerHorizontally:(id)sender;
- (IBAction)flipLayerVertically:(id)sender;
- (IBAction)duplicateLayer:(id)sender;
- (IBAction)nextLayer:(id)sender;
- (IBAction)previousLayer:(id)sender;
- (IBAction)setPatternToSelection:(id)sender;
- (IBAction)showPreviewWindow:(NSEvent *)sender;
- (IBAction)togglePreviewWindow:(id)sender;
- (IBAction)showBackgroundInfo:(id)sender;
- (IBAction)redrawCanvas:(id)sender;
- (IBAction)fill:(id)sender;

- (IBAction)toggleGrid:(id)sender;
- (IBAction)showGridSettingsPrompter:(id)sender;

- (IBAction)selectAll:(id)sender;
- (IBAction)selectNone:(id)sender;
- (IBAction)invertSelection:(id)sender;

- (IBAction)cut:(id)sender;
- (IBAction)copy:(id)sender;
- (IBAction)copyMerged:(id)sender;
- (IBAction)paste:(id)sender;
- (IBAction)pasteIntoActiveLayer:(id)sender;
- (IBAction)delete:(id)sender;

- (IBAction)cutLayer:(id)sender;
- (IBAction)copyLayer:(id)sender;
- (IBAction)pasteLayer:(id)sender;

@end
