/* $Id$ */

/** @file
 * VBox OpenGL list of opengl functions common in Mesa and vbox opengl stub
 */

/*
 * Copyright (C) 2009-2016 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef GLAPI_ENTRY
#error GLAPI_ENTRY should be defined.
#endif

GLAPI_ENTRY(NewList)
GLAPI_ENTRY(EndList)
GLAPI_ENTRY(CallList)
GLAPI_ENTRY(CallLists)
GLAPI_ENTRY(DeleteLists)
GLAPI_ENTRY(GenLists)
GLAPI_ENTRY(ListBase)
GLAPI_ENTRY(Begin)
GLAPI_ENTRY(Bitmap)
GLAPI_ENTRY(Color3b)
GLAPI_ENTRY(Color3bv)
GLAPI_ENTRY(Color3d)
GLAPI_ENTRY(Color3dv)
GLAPI_ENTRY(Color3f)
GLAPI_ENTRY(Color3fv)
GLAPI_ENTRY(Color3i)
GLAPI_ENTRY(Color3iv)
GLAPI_ENTRY(Color3s)
GLAPI_ENTRY(Color3sv)
GLAPI_ENTRY(Color3ub)
GLAPI_ENTRY(Color3ubv)
GLAPI_ENTRY(Color3ui)
GLAPI_ENTRY(Color3uiv)
GLAPI_ENTRY(Color3us)
GLAPI_ENTRY(Color3usv)
GLAPI_ENTRY(Color4b)
GLAPI_ENTRY(Color4bv)
GLAPI_ENTRY(Color4d)
GLAPI_ENTRY(Color4dv)
GLAPI_ENTRY(Color4f)
GLAPI_ENTRY(Color4fv)
GLAPI_ENTRY(Color4i)
GLAPI_ENTRY(Color4iv)
GLAPI_ENTRY(Color4s)
GLAPI_ENTRY(Color4sv)
GLAPI_ENTRY(Color4ub)
GLAPI_ENTRY(Color4ubv)
GLAPI_ENTRY(Color4ui)
GLAPI_ENTRY(Color4uiv)
GLAPI_ENTRY(Color4us)
GLAPI_ENTRY(Color4usv)
GLAPI_ENTRY(EdgeFlag)
GLAPI_ENTRY(EdgeFlagv)
GLAPI_ENTRY(End)
GLAPI_ENTRY(Indexd)
GLAPI_ENTRY(Indexdv)
GLAPI_ENTRY(Indexf)
GLAPI_ENTRY(Indexfv)
GLAPI_ENTRY(Indexi)
GLAPI_ENTRY(Indexiv)
GLAPI_ENTRY(Indexs)
GLAPI_ENTRY(Indexsv)
GLAPI_ENTRY(Normal3b)
GLAPI_ENTRY(Normal3bv)
GLAPI_ENTRY(Normal3d)
GLAPI_ENTRY(Normal3dv)
GLAPI_ENTRY(Normal3f)
GLAPI_ENTRY(Normal3fv)
GLAPI_ENTRY(Normal3i)
GLAPI_ENTRY(Normal3iv)
GLAPI_ENTRY(Normal3s)
GLAPI_ENTRY(Normal3sv)
GLAPI_ENTRY(RasterPos2d)
GLAPI_ENTRY(RasterPos2dv)
GLAPI_ENTRY(RasterPos2f)
GLAPI_ENTRY(RasterPos2fv)
GLAPI_ENTRY(RasterPos2i)
GLAPI_ENTRY(RasterPos2iv)
GLAPI_ENTRY(RasterPos2s)
GLAPI_ENTRY(RasterPos2sv)
GLAPI_ENTRY(RasterPos3d)
GLAPI_ENTRY(RasterPos3dv)
GLAPI_ENTRY(RasterPos3f)
GLAPI_ENTRY(RasterPos3fv)
GLAPI_ENTRY(RasterPos3i)
GLAPI_ENTRY(RasterPos3iv)
GLAPI_ENTRY(RasterPos3s)
GLAPI_ENTRY(RasterPos3sv)
GLAPI_ENTRY(RasterPos4d)
GLAPI_ENTRY(RasterPos4dv)
GLAPI_ENTRY(RasterPos4f)
GLAPI_ENTRY(RasterPos4fv)
GLAPI_ENTRY(RasterPos4i)
GLAPI_ENTRY(RasterPos4iv)
GLAPI_ENTRY(RasterPos4s)
GLAPI_ENTRY(RasterPos4sv)
GLAPI_ENTRY(Rectd)
GLAPI_ENTRY(Rectdv)
GLAPI_ENTRY(Rectf)
GLAPI_ENTRY(Rectfv)
GLAPI_ENTRY(Recti)
GLAPI_ENTRY(Rectiv)
GLAPI_ENTRY(Rects)
GLAPI_ENTRY(Rectsv)
GLAPI_ENTRY(TexCoord1d)
GLAPI_ENTRY(TexCoord1dv)
GLAPI_ENTRY(TexCoord1f)
GLAPI_ENTRY(TexCoord1fv)
GLAPI_ENTRY(TexCoord1i)
GLAPI_ENTRY(TexCoord1iv)
GLAPI_ENTRY(TexCoord1s)
GLAPI_ENTRY(TexCoord1sv)
GLAPI_ENTRY(TexCoord2d)
GLAPI_ENTRY(TexCoord2dv)
GLAPI_ENTRY(TexCoord2f)
GLAPI_ENTRY(TexCoord2fv)
GLAPI_ENTRY(TexCoord2i)
GLAPI_ENTRY(TexCoord2iv)
GLAPI_ENTRY(TexCoord2s)
GLAPI_ENTRY(TexCoord2sv)
GLAPI_ENTRY(TexCoord3d)
GLAPI_ENTRY(TexCoord3dv)
GLAPI_ENTRY(TexCoord3f)
GLAPI_ENTRY(TexCoord3fv)
GLAPI_ENTRY(TexCoord3i)
GLAPI_ENTRY(TexCoord3iv)
GLAPI_ENTRY(TexCoord3s)
GLAPI_ENTRY(TexCoord3sv)
GLAPI_ENTRY(TexCoord4d)
GLAPI_ENTRY(TexCoord4dv)
GLAPI_ENTRY(TexCoord4f)
GLAPI_ENTRY(TexCoord4fv)
GLAPI_ENTRY(TexCoord4i)
GLAPI_ENTRY(TexCoord4iv)
GLAPI_ENTRY(TexCoord4s)
GLAPI_ENTRY(TexCoord4sv)
GLAPI_ENTRY(Vertex2d)
GLAPI_ENTRY(Vertex2dv)
GLAPI_ENTRY(Vertex2f)
GLAPI_ENTRY(Vertex2fv)
GLAPI_ENTRY(Vertex2i)
GLAPI_ENTRY(Vertex2iv)
GLAPI_ENTRY(Vertex2s)
GLAPI_ENTRY(Vertex2sv)
GLAPI_ENTRY(Vertex3d)
GLAPI_ENTRY(Vertex3dv)
GLAPI_ENTRY(Vertex3f)
GLAPI_ENTRY(Vertex3fv)
GLAPI_ENTRY(Vertex3i)
GLAPI_ENTRY(Vertex3iv)
GLAPI_ENTRY(Vertex3s)
GLAPI_ENTRY(Vertex3sv)
GLAPI_ENTRY(Vertex4d)
GLAPI_ENTRY(Vertex4dv)
GLAPI_ENTRY(Vertex4f)
GLAPI_ENTRY(Vertex4fv)
GLAPI_ENTRY(Vertex4i)
GLAPI_ENTRY(Vertex4iv)
GLAPI_ENTRY(Vertex4s)
GLAPI_ENTRY(Vertex4sv)
GLAPI_ENTRY(ClipPlane)
GLAPI_ENTRY(ColorMaterial)
GLAPI_ENTRY(CullFace)
GLAPI_ENTRY(Fogf)
GLAPI_ENTRY(Fogfv)
GLAPI_ENTRY(Fogi)
GLAPI_ENTRY(Fogiv)
GLAPI_ENTRY(FrontFace)
GLAPI_ENTRY(Hint)
GLAPI_ENTRY(Lightf)
GLAPI_ENTRY(Lightfv)
GLAPI_ENTRY(Lighti)
GLAPI_ENTRY(Lightiv)
GLAPI_ENTRY(LightModelf)
GLAPI_ENTRY(LightModelfv)
GLAPI_ENTRY(LightModeli)
GLAPI_ENTRY(LightModeliv)
GLAPI_ENTRY(LineStipple)
GLAPI_ENTRY(LineWidth)
GLAPI_ENTRY(Materialf)
GLAPI_ENTRY(Materialfv)
GLAPI_ENTRY(Materiali)
GLAPI_ENTRY(Materialiv)
GLAPI_ENTRY(PointSize)
GLAPI_ENTRY(PolygonMode)
GLAPI_ENTRY(PolygonStipple)
GLAPI_ENTRY(Scissor)
GLAPI_ENTRY(ShadeModel)
GLAPI_ENTRY(TexParameterf)
GLAPI_ENTRY(TexParameterfv)
GLAPI_ENTRY(TexParameteri)
GLAPI_ENTRY(TexParameteriv)
GLAPI_ENTRY(TexImage1D)
GLAPI_ENTRY(TexImage2D)
GLAPI_ENTRY(TexEnvf)
GLAPI_ENTRY(TexEnvfv)
GLAPI_ENTRY(TexEnvi)
GLAPI_ENTRY(TexEnviv)
GLAPI_ENTRY(TexGend)
GLAPI_ENTRY(TexGendv)
GLAPI_ENTRY(TexGenf)
GLAPI_ENTRY(TexGenfv)
GLAPI_ENTRY(TexGeni)
GLAPI_ENTRY(TexGeniv)
GLAPI_ENTRY(FeedbackBuffer)
GLAPI_ENTRY(SelectBuffer)
GLAPI_ENTRY(RenderMode)
GLAPI_ENTRY(InitNames)
GLAPI_ENTRY(LoadName)
GLAPI_ENTRY(PassThrough)
GLAPI_ENTRY(PopName)
GLAPI_ENTRY(PushName)
GLAPI_ENTRY(DrawBuffer)
GLAPI_ENTRY(Clear)
GLAPI_ENTRY(ClearAccum)
GLAPI_ENTRY(ClearIndex)
GLAPI_ENTRY(ClearColor)
GLAPI_ENTRY(ClearStencil)
GLAPI_ENTRY(ClearDepth)
GLAPI_ENTRY(StencilMask)
GLAPI_ENTRY(ColorMask)
GLAPI_ENTRY(DepthMask)
GLAPI_ENTRY(IndexMask)
GLAPI_ENTRY(Accum)
GLAPI_ENTRY(Disable)
GLAPI_ENTRY(Enable)
GLAPI_ENTRY(Finish)
GLAPI_ENTRY(Flush)
GLAPI_ENTRY(PopAttrib)
GLAPI_ENTRY(PushAttrib)
GLAPI_ENTRY(Map1d)
GLAPI_ENTRY(Map1f)
GLAPI_ENTRY(Map2d)
GLAPI_ENTRY(Map2f)
GLAPI_ENTRY(MapGrid1d)
GLAPI_ENTRY(MapGrid1f)
GLAPI_ENTRY(MapGrid2d)
GLAPI_ENTRY(MapGrid2f)
GLAPI_ENTRY(EvalCoord1d)
GLAPI_ENTRY(EvalCoord1dv)
GLAPI_ENTRY(EvalCoord1f)
GLAPI_ENTRY(EvalCoord1fv)
GLAPI_ENTRY(EvalCoord2d)
GLAPI_ENTRY(EvalCoord2dv)
GLAPI_ENTRY(EvalCoord2f)
GLAPI_ENTRY(EvalCoord2fv)
GLAPI_ENTRY(EvalMesh1)
GLAPI_ENTRY(EvalPoint1)
GLAPI_ENTRY(EvalMesh2)
GLAPI_ENTRY(EvalPoint2)
GLAPI_ENTRY(AlphaFunc)
GLAPI_ENTRY(BlendFunc)
GLAPI_ENTRY(LogicOp)
GLAPI_ENTRY(StencilFunc)
GLAPI_ENTRY(StencilOp)
GLAPI_ENTRY(DepthFunc)
GLAPI_ENTRY(PixelZoom)
GLAPI_ENTRY(PixelTransferf)
GLAPI_ENTRY(PixelTransferi)
GLAPI_ENTRY(PixelStoref)
GLAPI_ENTRY(PixelStorei)
GLAPI_ENTRY(PixelMapfv)
GLAPI_ENTRY(PixelMapuiv)
GLAPI_ENTRY(PixelMapusv)
GLAPI_ENTRY(ReadBuffer)
GLAPI_ENTRY(CopyPixels)
GLAPI_ENTRY(ReadPixels)
GLAPI_ENTRY(DrawPixels)
GLAPI_ENTRY(GetBooleanv)
GLAPI_ENTRY(GetClipPlane)
GLAPI_ENTRY(GetDoublev)
GLAPI_ENTRY(GetError)
GLAPI_ENTRY(GetFloatv)
GLAPI_ENTRY(GetIntegerv)
GLAPI_ENTRY(GetLightfv)
GLAPI_ENTRY(GetLightiv)
GLAPI_ENTRY(GetMapdv)
GLAPI_ENTRY(GetMapfv)
GLAPI_ENTRY(GetMapiv)
GLAPI_ENTRY(GetMaterialfv)
GLAPI_ENTRY(GetMaterialiv)
GLAPI_ENTRY(GetPixelMapfv)
GLAPI_ENTRY(GetPixelMapuiv)
GLAPI_ENTRY(GetPixelMapusv)
GLAPI_ENTRY(GetPolygonStipple)
GLAPI_ENTRY(GetString)
GLAPI_ENTRY(GetTexEnvfv)
GLAPI_ENTRY(GetTexEnviv)
GLAPI_ENTRY(GetTexGendv)
GLAPI_ENTRY(GetTexGenfv)
GLAPI_ENTRY(GetTexGeniv)
GLAPI_ENTRY(GetTexImage)
GLAPI_ENTRY(GetTexParameterfv)
GLAPI_ENTRY(GetTexParameteriv)
GLAPI_ENTRY(GetTexLevelParameterfv)
GLAPI_ENTRY(GetTexLevelParameteriv)
GLAPI_ENTRY(IsEnabled)
GLAPI_ENTRY(IsList)
GLAPI_ENTRY(DepthRange)
GLAPI_ENTRY(Frustum)
GLAPI_ENTRY(LoadIdentity)
GLAPI_ENTRY(LoadMatrixf)
GLAPI_ENTRY(LoadMatrixd)
GLAPI_ENTRY(MatrixMode)
GLAPI_ENTRY(MultMatrixf)
GLAPI_ENTRY(MultMatrixd)
GLAPI_ENTRY(Ortho)
GLAPI_ENTRY(PopMatrix)
GLAPI_ENTRY(PushMatrix)
GLAPI_ENTRY(Rotated)
GLAPI_ENTRY(Rotatef)
GLAPI_ENTRY(Scaled)
GLAPI_ENTRY(Scalef)
GLAPI_ENTRY(Translated)
GLAPI_ENTRY(Translatef)
GLAPI_ENTRY(Viewport)
GLAPI_ENTRY(ArrayElement)
GLAPI_ENTRY(BindTexture)
GLAPI_ENTRY(ColorPointer)
GLAPI_ENTRY(DisableClientState)
GLAPI_ENTRY(DrawArrays)
GLAPI_ENTRY(DrawElements)
GLAPI_ENTRY(EdgeFlagPointer)
GLAPI_ENTRY(EnableClientState)
GLAPI_ENTRY(IndexPointer)
GLAPI_ENTRY(Indexub)
GLAPI_ENTRY(Indexubv)
GLAPI_ENTRY(InterleavedArrays)
GLAPI_ENTRY(NormalPointer)
GLAPI_ENTRY(PolygonOffset)
GLAPI_ENTRY(TexCoordPointer)
GLAPI_ENTRY(VertexPointer)
GLAPI_ENTRY(AreTexturesResident)
GLAPI_ENTRY(CopyTexImage1D)
GLAPI_ENTRY(CopyTexImage2D)
GLAPI_ENTRY(CopyTexSubImage1D)
GLAPI_ENTRY(CopyTexSubImage2D)
GLAPI_ENTRY(DeleteTextures)
GLAPI_ENTRY(GenTextures)
GLAPI_ENTRY(GetPointerv)
GLAPI_ENTRY(IsTexture)
GLAPI_ENTRY(PrioritizeTextures)
GLAPI_ENTRY(TexSubImage1D)
GLAPI_ENTRY(TexSubImage2D)
GLAPI_ENTRY(PopClientAttrib)
GLAPI_ENTRY(PushClientAttrib)
GLAPI_ENTRY(BlendColor)
GLAPI_ENTRY(BlendEquation)
GLAPI_ENTRY(DrawRangeElements)
GLAPI_ENTRY(ColorTable)
GLAPI_ENTRY(ColorTableParameterfv)
GLAPI_ENTRY(ColorTableParameteriv)
GLAPI_ENTRY(CopyColorTable)
GLAPI_ENTRY(GetColorTable)
GLAPI_ENTRY(GetColorTableParameterfv)
GLAPI_ENTRY(GetColorTableParameteriv)
GLAPI_ENTRY(ColorSubTable)
GLAPI_ENTRY(CopyColorSubTable)
GLAPI_ENTRY(ConvolutionFilter1D)
GLAPI_ENTRY(ConvolutionFilter2D)
GLAPI_ENTRY(ConvolutionParameterf)
GLAPI_ENTRY(ConvolutionParameterfv)
GLAPI_ENTRY(ConvolutionParameteri)
GLAPI_ENTRY(ConvolutionParameteriv)
GLAPI_ENTRY(CopyConvolutionFilter1D)
GLAPI_ENTRY(CopyConvolutionFilter2D)
GLAPI_ENTRY(GetConvolutionFilter)
GLAPI_ENTRY(GetConvolutionParameterfv)
GLAPI_ENTRY(GetConvolutionParameteriv)
GLAPI_ENTRY(GetSeparableFilter)
GLAPI_ENTRY(SeparableFilter2D)
GLAPI_ENTRY(GetHistogram)
GLAPI_ENTRY(GetHistogramParameterfv)
GLAPI_ENTRY(GetHistogramParameteriv)
GLAPI_ENTRY(GetMinmax)
GLAPI_ENTRY(GetMinmaxParameterfv)
GLAPI_ENTRY(GetMinmaxParameteriv)
GLAPI_ENTRY(Histogram)
GLAPI_ENTRY(Minmax)
GLAPI_ENTRY(ResetHistogram)
GLAPI_ENTRY(ResetMinmax)
GLAPI_ENTRY(TexImage3D)
GLAPI_ENTRY(TexSubImage3D)
GLAPI_ENTRY(CopyTexSubImage3D)
GLAPI_ENTRY(ActiveTextureARB)
GLAPI_ENTRY(ClientActiveTextureARB)
GLAPI_ENTRY(MultiTexCoord1dARB)
GLAPI_ENTRY(MultiTexCoord1dvARB)
GLAPI_ENTRY(MultiTexCoord1fARB)
GLAPI_ENTRY(MultiTexCoord1fvARB)
GLAPI_ENTRY(MultiTexCoord1iARB)
GLAPI_ENTRY(MultiTexCoord1ivARB)
GLAPI_ENTRY(MultiTexCoord1sARB)
GLAPI_ENTRY(MultiTexCoord1svARB)
GLAPI_ENTRY(MultiTexCoord2dARB)
GLAPI_ENTRY(MultiTexCoord2dvARB)
GLAPI_ENTRY(MultiTexCoord2fARB)
GLAPI_ENTRY(MultiTexCoord2fvARB)
GLAPI_ENTRY(MultiTexCoord2iARB)
GLAPI_ENTRY(MultiTexCoord2ivARB)
GLAPI_ENTRY(MultiTexCoord2sARB)
GLAPI_ENTRY(MultiTexCoord2svARB)
GLAPI_ENTRY(MultiTexCoord3dARB)
GLAPI_ENTRY(MultiTexCoord3dvARB)
GLAPI_ENTRY(MultiTexCoord3fARB)
GLAPI_ENTRY(MultiTexCoord3fvARB)
GLAPI_ENTRY(MultiTexCoord3iARB)
GLAPI_ENTRY(MultiTexCoord3ivARB)
GLAPI_ENTRY(MultiTexCoord3sARB)
GLAPI_ENTRY(MultiTexCoord3svARB)
GLAPI_ENTRY(MultiTexCoord4dARB)
GLAPI_ENTRY(MultiTexCoord4dvARB)
GLAPI_ENTRY(MultiTexCoord4fARB)
GLAPI_ENTRY(MultiTexCoord4fvARB)
GLAPI_ENTRY(MultiTexCoord4iARB)
GLAPI_ENTRY(MultiTexCoord4ivARB)
GLAPI_ENTRY(MultiTexCoord4sARB)
GLAPI_ENTRY(MultiTexCoord4svARB)
GLAPI_ENTRY(AttachShader)
GLAPI_ENTRY(CreateProgram)
GLAPI_ENTRY(CreateShader)
GLAPI_ENTRY(DeleteProgram)
GLAPI_ENTRY(DeleteShader)
GLAPI_ENTRY(DetachShader)
GLAPI_ENTRY(GetAttachedShaders)
GLAPI_ENTRY(GetProgramInfoLog)
GLAPI_ENTRY(GetProgramiv)
GLAPI_ENTRY(GetShaderInfoLog)
GLAPI_ENTRY(GetShaderiv)
GLAPI_ENTRY(IsProgram)
GLAPI_ENTRY(IsShader)
GLAPI_ENTRY(StencilFuncSeparate)
GLAPI_ENTRY(StencilMaskSeparate)
GLAPI_ENTRY(StencilOpSeparate)
GLAPI_ENTRY(UniformMatrix2x3fv)
GLAPI_ENTRY(UniformMatrix2x4fv)
GLAPI_ENTRY(UniformMatrix3x2fv)
GLAPI_ENTRY(UniformMatrix3x4fv)
GLAPI_ENTRY(UniformMatrix4x2fv)
GLAPI_ENTRY(UniformMatrix4x3fv)
GLAPI_ENTRY(LoadTransposeMatrixdARB)
GLAPI_ENTRY(LoadTransposeMatrixfARB)
GLAPI_ENTRY(MultTransposeMatrixdARB)
GLAPI_ENTRY(MultTransposeMatrixfARB)
GLAPI_ENTRY(SampleCoverageARB)
GLAPI_ENTRY(CompressedTexImage1DARB)
GLAPI_ENTRY(CompressedTexImage2DARB)
GLAPI_ENTRY(CompressedTexImage3DARB)
GLAPI_ENTRY(CompressedTexSubImage1DARB)
GLAPI_ENTRY(CompressedTexSubImage2DARB)
GLAPI_ENTRY(CompressedTexSubImage3DARB)
GLAPI_ENTRY(GetCompressedTexImageARB)
GLAPI_ENTRY(DisableVertexAttribArrayARB)
GLAPI_ENTRY(EnableVertexAttribArrayARB)
GLAPI_ENTRY(GetProgramEnvParameterdvARB)
GLAPI_ENTRY(GetProgramEnvParameterfvARB)
GLAPI_ENTRY(GetProgramLocalParameterdvARB)
GLAPI_ENTRY(GetProgramLocalParameterfvARB)
GLAPI_ENTRY(GetProgramStringARB)
GLAPI_ENTRY(GetProgramivARB)
GLAPI_ENTRY(GetVertexAttribdvARB)
GLAPI_ENTRY(GetVertexAttribfvARB)
GLAPI_ENTRY(GetVertexAttribivARB)
GLAPI_ENTRY(ProgramEnvParameter4dARB)
GLAPI_ENTRY(ProgramEnvParameter4dvARB)
GLAPI_ENTRY(ProgramEnvParameter4fARB)
GLAPI_ENTRY(ProgramEnvParameter4fvARB)
GLAPI_ENTRY(ProgramLocalParameter4dARB)
GLAPI_ENTRY(ProgramLocalParameter4dvARB)
GLAPI_ENTRY(ProgramLocalParameter4fARB)
GLAPI_ENTRY(ProgramLocalParameter4fvARB)
GLAPI_ENTRY(ProgramStringARB)
GLAPI_ENTRY(VertexAttrib1dARB)
GLAPI_ENTRY(VertexAttrib1dvARB)
GLAPI_ENTRY(VertexAttrib1fARB)
GLAPI_ENTRY(VertexAttrib1fvARB)
GLAPI_ENTRY(VertexAttrib1sARB)
GLAPI_ENTRY(VertexAttrib1svARB)
GLAPI_ENTRY(VertexAttrib2dARB)
GLAPI_ENTRY(VertexAttrib2dvARB)
GLAPI_ENTRY(VertexAttrib2fARB)
GLAPI_ENTRY(VertexAttrib2fvARB)
GLAPI_ENTRY(VertexAttrib2sARB)
GLAPI_ENTRY(VertexAttrib2svARB)
GLAPI_ENTRY(VertexAttrib3dARB)
GLAPI_ENTRY(VertexAttrib3dvARB)
GLAPI_ENTRY(VertexAttrib3fARB)
GLAPI_ENTRY(VertexAttrib3fvARB)
GLAPI_ENTRY(VertexAttrib3sARB)
GLAPI_ENTRY(VertexAttrib3svARB)
GLAPI_ENTRY(VertexAttrib4NbvARB)
GLAPI_ENTRY(VertexAttrib4NivARB)
GLAPI_ENTRY(VertexAttrib4NsvARB)
GLAPI_ENTRY(VertexAttrib4NubARB)
GLAPI_ENTRY(VertexAttrib4NubvARB)
GLAPI_ENTRY(VertexAttrib4NuivARB)
GLAPI_ENTRY(VertexAttrib4NusvARB)
GLAPI_ENTRY(VertexAttrib4bvARB)
GLAPI_ENTRY(VertexAttrib4dARB)
GLAPI_ENTRY(VertexAttrib4dvARB)
GLAPI_ENTRY(VertexAttrib4fARB)
GLAPI_ENTRY(VertexAttrib4fvARB)
GLAPI_ENTRY(VertexAttrib4ivARB)
GLAPI_ENTRY(VertexAttrib4sARB)
GLAPI_ENTRY(VertexAttrib4svARB)
GLAPI_ENTRY(VertexAttrib4ubvARB)
GLAPI_ENTRY(VertexAttrib4uivARB)
GLAPI_ENTRY(VertexAttrib4usvARB)
GLAPI_ENTRY(VertexAttribPointerARB)
GLAPI_ENTRY(BindBufferARB)
GLAPI_ENTRY(BufferDataARB)
GLAPI_ENTRY(BufferSubDataARB)
GLAPI_ENTRY(DeleteBuffersARB)
GLAPI_ENTRY(GenBuffersARB)
GLAPI_ENTRY(GetBufferParameterivARB)
GLAPI_ENTRY(GetBufferPointervARB)
GLAPI_ENTRY(GetBufferSubDataARB)
GLAPI_ENTRY(IsBufferARB)
GLAPI_ENTRY(MapBufferARB)
GLAPI_ENTRY(UnmapBufferARB)
GLAPI_ENTRY(BeginQueryARB)
GLAPI_ENTRY(DeleteQueriesARB)
GLAPI_ENTRY(EndQueryARB)
GLAPI_ENTRY(GenQueriesARB)
GLAPI_ENTRY(GetQueryObjectivARB)
GLAPI_ENTRY(GetQueryObjectuivARB)
GLAPI_ENTRY(GetQueryivARB)
GLAPI_ENTRY(IsQueryARB)
GLAPI_ENTRY(AttachObjectARB)
GLAPI_ENTRY(CompileShaderARB)
GLAPI_ENTRY(CreateProgramObjectARB)
GLAPI_ENTRY(CreateShaderObjectARB)
GLAPI_ENTRY(DeleteObjectARB)
GLAPI_ENTRY(DetachObjectARB)
GLAPI_ENTRY(GetActiveUniformARB)
GLAPI_ENTRY(GetAttachedObjectsARB)
GLAPI_ENTRY(GetHandleARB)
GLAPI_ENTRY(GetInfoLogARB)
GLAPI_ENTRY(GetObjectParameterfvARB)
GLAPI_ENTRY(GetObjectParameterivARB)
GLAPI_ENTRY(GetShaderSourceARB)
GLAPI_ENTRY(GetUniformLocationARB)
GLAPI_ENTRY(GetUniformfvARB)
GLAPI_ENTRY(GetUniformivARB)
GLAPI_ENTRY(LinkProgramARB)
GLAPI_ENTRY(ShaderSourceARB)
GLAPI_ENTRY(Uniform1fARB)
GLAPI_ENTRY(Uniform1fvARB)
GLAPI_ENTRY(Uniform1iARB)
GLAPI_ENTRY(Uniform1ivARB)
GLAPI_ENTRY(Uniform2fARB)
GLAPI_ENTRY(Uniform2fvARB)
GLAPI_ENTRY(Uniform2iARB)
GLAPI_ENTRY(Uniform2ivARB)
GLAPI_ENTRY(Uniform3fARB)
GLAPI_ENTRY(Uniform3fvARB)
GLAPI_ENTRY(Uniform3iARB)
GLAPI_ENTRY(Uniform3ivARB)
GLAPI_ENTRY(Uniform4fARB)
GLAPI_ENTRY(Uniform4fvARB)
GLAPI_ENTRY(Uniform4iARB)
GLAPI_ENTRY(Uniform4ivARB)
GLAPI_ENTRY(UniformMatrix2fvARB)
GLAPI_ENTRY(UniformMatrix3fvARB)
GLAPI_ENTRY(UniformMatrix4fvARB)
GLAPI_ENTRY(UseProgramObjectARB)
GLAPI_ENTRY(ValidateProgramARB)
GLAPI_ENTRY(BindAttribLocationARB)
GLAPI_ENTRY(GetActiveAttribARB)
GLAPI_ENTRY(GetAttribLocationARB)
//GLAPI_ENTRY(DrawBuffersARB)
//GLAPI_ENTRY(PolygonOffsetEXT)
//GLAPI_ENTRY(GetPixelTexGenParameterfvSGIS)
//GLAPI_ENTRY(GetPixelTexGenParameterivSGIS)
//GLAPI_ENTRY(PixelTexGenParameterfSGIS)
//GLAPI_ENTRY(PixelTexGenParameterfvSGIS)
//GLAPI_ENTRY(PixelTexGenParameteriSGIS)
//GLAPI_ENTRY(PixelTexGenParameterivSGIS)
GLAPI_ENTRY(PointParameterfEXT)
GLAPI_ENTRY(PointParameterfvEXT)
GLAPI_ENTRY(LockArraysEXT)
GLAPI_ENTRY(UnlockArraysEXT)
//GLAPI_ENTRY(CullParameterdvEXT)
//GLAPI_ENTRY(CullParameterfvEXT)
GLAPI_ENTRY(SecondaryColor3bEXT)
GLAPI_ENTRY(SecondaryColor3bvEXT)
GLAPI_ENTRY(SecondaryColor3dEXT)
GLAPI_ENTRY(SecondaryColor3dvEXT)
GLAPI_ENTRY(SecondaryColor3fEXT)
GLAPI_ENTRY(SecondaryColor3fvEXT)
GLAPI_ENTRY(SecondaryColor3iEXT)
GLAPI_ENTRY(SecondaryColor3ivEXT)
GLAPI_ENTRY(SecondaryColor3sEXT)
GLAPI_ENTRY(SecondaryColor3svEXT)
GLAPI_ENTRY(SecondaryColor3ubEXT)
GLAPI_ENTRY(SecondaryColor3ubvEXT)
GLAPI_ENTRY(SecondaryColor3uiEXT)
GLAPI_ENTRY(SecondaryColor3uivEXT)
GLAPI_ENTRY(SecondaryColor3usEXT)
GLAPI_ENTRY(SecondaryColor3usvEXT)
GLAPI_ENTRY(SecondaryColorPointerEXT)
GLAPI_ENTRY(MultiDrawArraysEXT)
GLAPI_ENTRY(MultiDrawElementsEXT)
GLAPI_ENTRY(FogCoordPointerEXT)
GLAPI_ENTRY(FogCoorddEXT)
GLAPI_ENTRY(FogCoorddvEXT)
GLAPI_ENTRY(FogCoordfEXT)
GLAPI_ENTRY(FogCoordfvEXT)
//GLAPI_ENTRY(PixelTexGenSGIX)
GLAPI_ENTRY(BlendFuncSeparateEXT)
GLAPI_ENTRY(FlushVertexArrayRangeNV)
GLAPI_ENTRY(VertexArrayRangeNV)
GLAPI_ENTRY(CombinerInputNV)
GLAPI_ENTRY(CombinerOutputNV)
GLAPI_ENTRY(CombinerParameterfNV)
GLAPI_ENTRY(CombinerParameterfvNV)
GLAPI_ENTRY(CombinerParameteriNV)
GLAPI_ENTRY(CombinerParameterivNV)
GLAPI_ENTRY(FinalCombinerInputNV)
GLAPI_ENTRY(GetCombinerInputParameterfvNV)
GLAPI_ENTRY(GetCombinerInputParameterivNV)
GLAPI_ENTRY(GetCombinerOutputParameterfvNV)
GLAPI_ENTRY(GetCombinerOutputParameterivNV)
GLAPI_ENTRY(GetFinalCombinerInputParameterfvNV)
GLAPI_ENTRY(GetFinalCombinerInputParameterivNV)
GLAPI_ENTRY(DeleteFencesNV)
GLAPI_ENTRY(FinishFenceNV)
GLAPI_ENTRY(GenFencesNV)
GLAPI_ENTRY(GetFenceivNV)
GLAPI_ENTRY(IsFenceNV)
GLAPI_ENTRY(SetFenceNV)
GLAPI_ENTRY(TestFenceNV)
GLAPI_ENTRY(AreProgramsResidentNV)
GLAPI_ENTRY(BindProgramNV)
GLAPI_ENTRY(DeleteProgramsNV)
GLAPI_ENTRY(ExecuteProgramNV)
GLAPI_ENTRY(GenProgramsNV)
GLAPI_ENTRY(GetProgramParameterdvNV)
GLAPI_ENTRY(GetProgramParameterfvNV)
GLAPI_ENTRY(GetProgramStringNV)
GLAPI_ENTRY(GetProgramivNV)
GLAPI_ENTRY(GetTrackMatrixivNV)
GLAPI_ENTRY(GetVertexAttribPointervNV)
GLAPI_ENTRY(GetVertexAttribdvNV)
GLAPI_ENTRY(GetVertexAttribfvNV)
GLAPI_ENTRY(GetVertexAttribivNV)
GLAPI_ENTRY(IsProgramNV)
GLAPI_ENTRY(LoadProgramNV)
GLAPI_ENTRY(ProgramParameters4dvNV)
GLAPI_ENTRY(ProgramParameters4fvNV)
GLAPI_ENTRY(RequestResidentProgramsNV)
GLAPI_ENTRY(TrackMatrixNV)
GLAPI_ENTRY(VertexAttrib1dNV)
GLAPI_ENTRY(VertexAttrib1dvNV)
GLAPI_ENTRY(VertexAttrib1fNV)
GLAPI_ENTRY(VertexAttrib1fvNV)
GLAPI_ENTRY(VertexAttrib1sNV)
GLAPI_ENTRY(VertexAttrib1svNV)
GLAPI_ENTRY(VertexAttrib2dNV)
GLAPI_ENTRY(VertexAttrib2dvNV)
GLAPI_ENTRY(VertexAttrib2fNV)
GLAPI_ENTRY(VertexAttrib2fvNV)
GLAPI_ENTRY(VertexAttrib2sNV)
GLAPI_ENTRY(VertexAttrib2svNV)
GLAPI_ENTRY(VertexAttrib3dNV)
GLAPI_ENTRY(VertexAttrib3dvNV)
GLAPI_ENTRY(VertexAttrib3fNV)
GLAPI_ENTRY(VertexAttrib3fvNV)
GLAPI_ENTRY(VertexAttrib3sNV)
GLAPI_ENTRY(VertexAttrib3svNV)
GLAPI_ENTRY(VertexAttrib4dNV)
GLAPI_ENTRY(VertexAttrib4dvNV)
GLAPI_ENTRY(VertexAttrib4fNV)
GLAPI_ENTRY(VertexAttrib4fvNV)
GLAPI_ENTRY(VertexAttrib4sNV)
GLAPI_ENTRY(VertexAttrib4svNV)
GLAPI_ENTRY(VertexAttrib4ubNV)
GLAPI_ENTRY(VertexAttrib4ubvNV)
GLAPI_ENTRY(VertexAttribPointerNV)
GLAPI_ENTRY(VertexAttribs1dvNV)
GLAPI_ENTRY(VertexAttribs1fvNV)
GLAPI_ENTRY(VertexAttribs1svNV)
GLAPI_ENTRY(VertexAttribs2dvNV)
GLAPI_ENTRY(VertexAttribs2fvNV)
GLAPI_ENTRY(VertexAttribs2svNV)
GLAPI_ENTRY(VertexAttribs3dvNV)
GLAPI_ENTRY(VertexAttribs3fvNV)
GLAPI_ENTRY(VertexAttribs3svNV)
GLAPI_ENTRY(VertexAttribs4dvNV)
GLAPI_ENTRY(VertexAttribs4fvNV)
GLAPI_ENTRY(VertexAttribs4svNV)
GLAPI_ENTRY(VertexAttribs4ubvNV)
GLAPI_ENTRY(PointParameteriNV)
GLAPI_ENTRY(PointParameterivNV)
GLAPI_ENTRY(GetProgramNamedParameterdvNV)
GLAPI_ENTRY(GetProgramNamedParameterfvNV)
GLAPI_ENTRY(ProgramNamedParameter4dNV)
GLAPI_ENTRY(ProgramNamedParameter4dvNV)
GLAPI_ENTRY(ProgramNamedParameter4fNV)
GLAPI_ENTRY(ProgramNamedParameter4fvNV)
//GLAPI_ENTRY(BlendEquationSeparateEXT)
GLAPI_ENTRY(BindFramebufferEXT)
GLAPI_ENTRY(BindRenderbufferEXT)
GLAPI_ENTRY(CheckFramebufferStatusEXT)
GLAPI_ENTRY(DeleteFramebuffersEXT)
GLAPI_ENTRY(DeleteRenderbuffersEXT)
GLAPI_ENTRY(FramebufferRenderbufferEXT)
GLAPI_ENTRY(FramebufferTexture1DEXT)
GLAPI_ENTRY(FramebufferTexture2DEXT)
GLAPI_ENTRY(FramebufferTexture3DEXT)
GLAPI_ENTRY(GenFramebuffersEXT)
GLAPI_ENTRY(GenRenderbuffersEXT)
GLAPI_ENTRY(GenerateMipmapEXT)
GLAPI_ENTRY(GetFramebufferAttachmentParameterivEXT)
GLAPI_ENTRY(GetRenderbufferParameterivEXT)
GLAPI_ENTRY(IsFramebufferEXT)
GLAPI_ENTRY(IsRenderbufferEXT)
GLAPI_ENTRY(RenderbufferStorageEXT)

