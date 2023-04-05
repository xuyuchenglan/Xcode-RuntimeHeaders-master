/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DTBucketTag {
    struct DTBucketTag *_field1;
    struct DTBucketTag *_field2;
    struct DTBucketTag *_field3;
    id _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double top;
    double bottom;
    double left;
    double right;
} CDStruct_f6c3f719;

typedef struct {
    long long version;
    void *retain;
    void *release;
    void *copyDescription;
    void *equal;
    void *hash;
} CDStruct_f2932e27;

typedef struct {
    long long version;
    void *retain;
    void *release;
    void *copyDescription;
    void *equal;
} CDStruct_b3b3fc87;

