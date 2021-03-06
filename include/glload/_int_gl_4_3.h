#ifndef OPENGL_GEN_CORE_4_3_H
#define OPENGL_GEN_CORE_4_3_H

#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/
#define GL_NUM_SHADING_LANGUAGE_VERSIONS 0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG 0x874E

typedef void (CODEGEN_FUNCPTR * PFNGLBINDVERTEXBUFFERPROC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (CODEGEN_FUNCPTR * PFNGLCLEARBUFFERDATAPROC)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef void (CODEGEN_FUNCPTR * PFNGLCLEARBUFFERSUBDATAPROC)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef void (CODEGEN_FUNCPTR * PFNGLCOPYIMAGESUBDATAPROC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (CODEGEN_FUNCPTR * PFNGLDEBUGMESSAGECALLBACKPROC)(GLDEBUGPROC callback, const void * userParam);
typedef void (CODEGEN_FUNCPTR * PFNGLDEBUGMESSAGECONTROLPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (CODEGEN_FUNCPTR * PFNGLDEBUGMESSAGEINSERTPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (CODEGEN_FUNCPTR * PFNGLDISPATCHCOMPUTEPROC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (CODEGEN_FUNCPTR * PFNGLDISPATCHCOMPUTEINDIRECTPROC)(GLintptr indirect);
typedef void (CODEGEN_FUNCPTR * PFNGLFRAMEBUFFERPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef GLuint (CODEGEN_FUNCPTR * PFNGLGETDEBUGMESSAGELOGPROC)(GLuint count, GLsizei bufsize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (CODEGEN_FUNCPTR * PFNGLGETFRAMEBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint * params);
typedef void (CODEGEN_FUNCPTR * PFNGLGETOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (CODEGEN_FUNCPTR * PFNGLGETOBJECTPTRLABELPROC)(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (CODEGEN_FUNCPTR * PFNGLGETPROGRAMINTERFACEIVPROC)(GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef GLuint (CODEGEN_FUNCPTR * PFNGLGETPROGRAMRESOURCEINDEXPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (CODEGEN_FUNCPTR * PFNGLGETPROGRAMRESOURCELOCATIONPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (CODEGEN_FUNCPTR * PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)(GLuint program, GLenum programInterface, const GLchar * name);
typedef void (CODEGEN_FUNCPTR * PFNGLGETPROGRAMRESOURCENAMEPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef void (CODEGEN_FUNCPTR * PFNGLGETPROGRAMRESOURCEIVPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATEBUFFERDATAPROC)(GLuint buffer);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATEBUFFERSUBDATAPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATEFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATESUBFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATETEXIMAGEPROC)(GLuint texture, GLint level);
typedef void (CODEGEN_FUNCPTR * PFNGLINVALIDATETEXSUBIMAGEPROC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (CODEGEN_FUNCPTR * PFNGLMULTIDRAWARRAYSINDIRECTPROC)(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (CODEGEN_FUNCPTR * PFNGLMULTIDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (CODEGEN_FUNCPTR * PFNGLOBJECTLABELPROC)(GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (CODEGEN_FUNCPTR * PFNGLOBJECTPTRLABELPROC)(const void * ptr, GLsizei length, const GLchar * label);
typedef void (CODEGEN_FUNCPTR * PFNGLPOPDEBUGGROUPPROC)();
typedef void (CODEGEN_FUNCPTR * PFNGLPUSHDEBUGGROUPPROC)(GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (CODEGEN_FUNCPTR * PFNGLSHADERSTORAGEBLOCKBINDINGPROC)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (CODEGEN_FUNCPTR * PFNGLTEXBUFFERRANGEPROC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (CODEGEN_FUNCPTR * PFNGLTEXSTORAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (CODEGEN_FUNCPTR * PFNGLTEXSTORAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (CODEGEN_FUNCPTR * PFNGLTEXTUREVIEWPROC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (CODEGEN_FUNCPTR * PFNGLVERTEXATTRIBBINDINGPROC)(GLuint attribindex, GLuint bindingindex);
typedef void (CODEGEN_FUNCPTR * PFNGLVERTEXATTRIBFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (CODEGEN_FUNCPTR * PFNGLVERTEXATTRIBIFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (CODEGEN_FUNCPTR * PFNGLVERTEXATTRIBLFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (CODEGEN_FUNCPTR * PFNGLVERTEXBINDINGDIVISORPROC)(GLuint bindingindex, GLuint divisor);

CI_API extern PFNGLBINDVERTEXBUFFERPROC _funcptr_glBindVertexBuffer;
#define glBindVertexBuffer _funcptr_glBindVertexBuffer
CI_API extern PFNGLCLEARBUFFERDATAPROC _funcptr_glClearBufferData;
#define glClearBufferData _funcptr_glClearBufferData
CI_API extern PFNGLCLEARBUFFERSUBDATAPROC _funcptr_glClearBufferSubData;
#define glClearBufferSubData _funcptr_glClearBufferSubData
CI_API extern PFNGLCOPYIMAGESUBDATAPROC _funcptr_glCopyImageSubData;
#define glCopyImageSubData _funcptr_glCopyImageSubData
CI_API extern PFNGLDEBUGMESSAGECALLBACKPROC _funcptr_glDebugMessageCallback;
#define glDebugMessageCallback _funcptr_glDebugMessageCallback
CI_API extern PFNGLDEBUGMESSAGECONTROLPROC _funcptr_glDebugMessageControl;
#define glDebugMessageControl _funcptr_glDebugMessageControl
CI_API extern PFNGLDEBUGMESSAGEINSERTPROC _funcptr_glDebugMessageInsert;
#define glDebugMessageInsert _funcptr_glDebugMessageInsert
CI_API extern PFNGLDISPATCHCOMPUTEPROC _funcptr_glDispatchCompute;
#define glDispatchCompute _funcptr_glDispatchCompute
CI_API extern PFNGLDISPATCHCOMPUTEINDIRECTPROC _funcptr_glDispatchComputeIndirect;
#define glDispatchComputeIndirect _funcptr_glDispatchComputeIndirect
CI_API extern PFNGLFRAMEBUFFERPARAMETERIPROC _funcptr_glFramebufferParameteri;
#define glFramebufferParameteri _funcptr_glFramebufferParameteri
CI_API extern PFNGLGETDEBUGMESSAGELOGPROC _funcptr_glGetDebugMessageLog;
#define glGetDebugMessageLog _funcptr_glGetDebugMessageLog
CI_API extern PFNGLGETFRAMEBUFFERPARAMETERIVPROC _funcptr_glGetFramebufferParameteriv;
#define glGetFramebufferParameteriv _funcptr_glGetFramebufferParameteriv
CI_API extern PFNGLGETOBJECTLABELPROC _funcptr_glGetObjectLabel;
#define glGetObjectLabel _funcptr_glGetObjectLabel
CI_API extern PFNGLGETOBJECTPTRLABELPROC _funcptr_glGetObjectPtrLabel;
#define glGetObjectPtrLabel _funcptr_glGetObjectPtrLabel
CI_API extern PFNGLGETPROGRAMINTERFACEIVPROC _funcptr_glGetProgramInterfaceiv;
#define glGetProgramInterfaceiv _funcptr_glGetProgramInterfaceiv
CI_API extern PFNGLGETPROGRAMRESOURCEINDEXPROC _funcptr_glGetProgramResourceIndex;
#define glGetProgramResourceIndex _funcptr_glGetProgramResourceIndex
CI_API extern PFNGLGETPROGRAMRESOURCELOCATIONPROC _funcptr_glGetProgramResourceLocation;
#define glGetProgramResourceLocation _funcptr_glGetProgramResourceLocation
CI_API extern PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC _funcptr_glGetProgramResourceLocationIndex;
#define glGetProgramResourceLocationIndex _funcptr_glGetProgramResourceLocationIndex
CI_API extern PFNGLGETPROGRAMRESOURCENAMEPROC _funcptr_glGetProgramResourceName;
#define glGetProgramResourceName _funcptr_glGetProgramResourceName
CI_API extern PFNGLGETPROGRAMRESOURCEIVPROC _funcptr_glGetProgramResourceiv;
#define glGetProgramResourceiv _funcptr_glGetProgramResourceiv
CI_API extern PFNGLINVALIDATEBUFFERDATAPROC _funcptr_glInvalidateBufferData;
#define glInvalidateBufferData _funcptr_glInvalidateBufferData
CI_API extern PFNGLINVALIDATEBUFFERSUBDATAPROC _funcptr_glInvalidateBufferSubData;
#define glInvalidateBufferSubData _funcptr_glInvalidateBufferSubData
CI_API extern PFNGLINVALIDATEFRAMEBUFFERPROC _funcptr_glInvalidateFramebuffer;
#define glInvalidateFramebuffer _funcptr_glInvalidateFramebuffer
CI_API extern PFNGLINVALIDATESUBFRAMEBUFFERPROC _funcptr_glInvalidateSubFramebuffer;
#define glInvalidateSubFramebuffer _funcptr_glInvalidateSubFramebuffer
CI_API extern PFNGLINVALIDATETEXIMAGEPROC _funcptr_glInvalidateTexImage;
#define glInvalidateTexImage _funcptr_glInvalidateTexImage
CI_API extern PFNGLINVALIDATETEXSUBIMAGEPROC _funcptr_glInvalidateTexSubImage;
#define glInvalidateTexSubImage _funcptr_glInvalidateTexSubImage
CI_API extern PFNGLMULTIDRAWARRAYSINDIRECTPROC _funcptr_glMultiDrawArraysIndirect;
#define glMultiDrawArraysIndirect _funcptr_glMultiDrawArraysIndirect
CI_API extern PFNGLMULTIDRAWELEMENTSINDIRECTPROC _funcptr_glMultiDrawElementsIndirect;
#define glMultiDrawElementsIndirect _funcptr_glMultiDrawElementsIndirect
CI_API extern PFNGLOBJECTLABELPROC _funcptr_glObjectLabel;
#define glObjectLabel _funcptr_glObjectLabel
CI_API extern PFNGLOBJECTPTRLABELPROC _funcptr_glObjectPtrLabel;
#define glObjectPtrLabel _funcptr_glObjectPtrLabel
CI_API extern PFNGLPOPDEBUGGROUPPROC _funcptr_glPopDebugGroup;
#define glPopDebugGroup _funcptr_glPopDebugGroup
CI_API extern PFNGLPUSHDEBUGGROUPPROC _funcptr_glPushDebugGroup;
#define glPushDebugGroup _funcptr_glPushDebugGroup
CI_API extern PFNGLSHADERSTORAGEBLOCKBINDINGPROC _funcptr_glShaderStorageBlockBinding;
#define glShaderStorageBlockBinding _funcptr_glShaderStorageBlockBinding
CI_API extern PFNGLTEXBUFFERRANGEPROC _funcptr_glTexBufferRange;
#define glTexBufferRange _funcptr_glTexBufferRange
CI_API extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC _funcptr_glTexStorage2DMultisample;
#define glTexStorage2DMultisample _funcptr_glTexStorage2DMultisample
CI_API extern PFNGLTEXSTORAGE3DMULTISAMPLEPROC _funcptr_glTexStorage3DMultisample;
#define glTexStorage3DMultisample _funcptr_glTexStorage3DMultisample
CI_API extern PFNGLTEXTUREVIEWPROC _funcptr_glTextureView;
#define glTextureView _funcptr_glTextureView
CI_API extern PFNGLVERTEXATTRIBBINDINGPROC _funcptr_glVertexAttribBinding;
#define glVertexAttribBinding _funcptr_glVertexAttribBinding
CI_API extern PFNGLVERTEXATTRIBFORMATPROC _funcptr_glVertexAttribFormat;
#define glVertexAttribFormat _funcptr_glVertexAttribFormat
CI_API extern PFNGLVERTEXATTRIBIFORMATPROC _funcptr_glVertexAttribIFormat;
#define glVertexAttribIFormat _funcptr_glVertexAttribIFormat
CI_API extern PFNGLVERTEXATTRIBLFORMATPROC _funcptr_glVertexAttribLFormat;
#define glVertexAttribLFormat _funcptr_glVertexAttribLFormat
CI_API extern PFNGLVERTEXBINDINGDIVISORPROC _funcptr_glVertexBindingDivisor;
#define glVertexBindingDivisor _funcptr_glVertexBindingDivisor

#ifdef __cplusplus
}
#endif /*__cplusplus*/
#endif /*OPENGL_GEN_CORE_4_3_H*/
