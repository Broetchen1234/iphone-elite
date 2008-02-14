//
//  ZiPhoneWindowController.h
//  ZiPhoneOSX

#import <Cocoa/Cocoa.h>


@interface ZiPhoneWindowController : NSWindowController {
  IBOutlet NSButton *m_btnDowngrade;
  IBOutlet NSButton *m_btnUnlock;
  IBOutlet NSButton *m_btnActivate;
  IBOutlet NSButton *m_btnJailbreak;
  IBOutlet NSButton *m_btnChangeImei;
  IBOutlet NSButton *m_btnVerbose;
  IBOutlet NSButton *m_btnErase;
  
  IBOutlet NSButton *m_btnStart;
  IBOutlet NSButton *m_btnStop;
  
  IBOutlet NSTextView *m_txtProgress;
  
  IBOutlet NSTextField *m_txtImei;
  IBOutlet NSTextField *m_lblImei;
    
  IBOutlet NSWindow *m_wndAbout;
  IBOutlet NSTextView *m_txtAbout;
  
  NSTask *m_processTask;
}

- (void)awakeFromNib;
- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication *)sender;
- (void)killAlertDidEnd:(NSAlert*) p_lert returnCode:(int) p_ret contextInfo:(void*)p_ctx;
- (void)windowWillClose:(NSNotification *)notification;

- (IBAction)startProcess:(id)sender;
- (IBAction)stopProcess:(id)sender;
- (IBAction)quitApplication:(id)sender;
- (IBAction)showAbout:(id)sender;
- (IBAction)checkboxClicked:(id)sender;

@end
