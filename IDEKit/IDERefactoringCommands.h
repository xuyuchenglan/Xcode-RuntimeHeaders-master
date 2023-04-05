/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDECommandHandler-Protocol.h"
#import "IDECommandHandlerVendor-Protocol.h"

@class IDERefactoringSession, IDERefactoringWindowController, NSMutableDictionary;

@interface IDERefactoringCommands : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    Class _selectionValidationClass;
    NSMutableDictionary *_transformationClasses;
    NSMutableDictionary *_viewControllerClasses;
    NSMutableDictionary *_inputValidatorClasses;
    id <IDESelectionSource> _selectionSource;
    IDERefactoringWindowController *_windowController;
    IDERefactoringSession *_session;
}

+ (void)refactoringCommandCompleted;
+ (id)_refactoringForMainWindow;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)_sharedHandler;
@property(retain) IDERefactoringSession *session; // @synthesize session=_session;
@property(retain) IDERefactoringWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_refactorEncapsulate:(id)arg1;
- (void)contextMenu_refactorMoveDown:(id)arg1;
- (void)contextMenu_refactorMoveUp:(id)arg1;
- (void)contextMenu_refactorCreateSuperclass:(id)arg1;
- (void)contextMenu_refactorExtract:(id)arg1;
- (void)contextMenu_refactorRename:(id)arg1;
- (void)refactorEncapsulate:(id)arg1;
- (void)refactorMoveDown:(id)arg1;
- (void)refactorMoveUp:(id)arg1;
- (void)refactorCreateSuperclass:(id)arg1;
- (void)refactorExtract:(id)arg1;
- (void)refactorRename:(id)arg1;
- (void)refactor:(id)arg1 contextMenu:(BOOL)arg2;
- (BOOL)_validateTransformation:(id)arg1 contextMenu:(BOOL)arg2 error:(id *)arg3;
- (void)genericAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)init;

@end

