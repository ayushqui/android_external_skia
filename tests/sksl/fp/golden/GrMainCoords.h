

/**************************************************************************************************
 *** This file was autogenerated from GrMainCoords.fp; do not modify.
 **************************************************************************************************/
#ifndef GrMainCoords_DEFINED
#define GrMainCoords_DEFINED

#include "include/core/SkM44.h"
#include "include/core/SkTypes.h"


#include "src/gpu/GrFragmentProcessor.h"

class GrMainCoords : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make() {
        return std::unique_ptr<GrFragmentProcessor>(new GrMainCoords());
    }
    GrMainCoords(const GrMainCoords& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "MainCoords"; }
    bool usesExplicitReturn() const override;
private:
    GrMainCoords()
    : INHERITED(kGrMainCoords_ClassID, kNone_OptimizationFlags) {
        this->setUsesSampleCoordsDirectly();
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
#if GR_TEST_UTILS
    SkString onDumpInfo() const override;
#endif
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    using INHERITED = GrFragmentProcessor;
};
#endif
