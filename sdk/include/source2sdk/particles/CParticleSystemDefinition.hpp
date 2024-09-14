#pragma once
#include "source2sdk/particles/IParticleSystemDefinition.hpp"
#include "source2sdk/particles/InheritableBoolType_t.hpp"
#include "source2sdk/particles/ParticleChildrenInfo_t.hpp"
#include "source2sdk/particles/ParticleControlPointConfiguration_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    class CParticleFunctionConstraint;
};

namespace source2sdk::particles
{
    class CParticleFunctionEmitter;
};

namespace source2sdk::particles
{
    class CParticleFunctionForce;
};

namespace source2sdk::particles
{
    class CParticleFunctionInitializer;
};

namespace source2sdk::particles
{
    class CParticleFunctionOperator;
};

namespace source2sdk::particles
{
    class CParticleFunctionPreEmission;
};

namespace source2sdk::particles
{
    class CParticleFunctionRenderer;
};

namespace source2sdk::particleslib
{
    struct ParticleNamedValueSource_t;
};

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x3f0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleSystemDefinition : public particles::IParticleSystemDefinition
    {
    public:
        // metadata: MPropertyFriendlyName "version"
        // metadata: MPropertySuppressField
        int32_t m_nBehaviorVersion; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertySuppressField
        // m_PreEmissionOperators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionPreEmission*> m_PreEmissionOperators;
        char m_PreEmissionOperators[0x18]; // 0x10        
        // metadata: MPropertySuppressField
        // m_Emitters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionEmitter*> m_Emitters;
        char m_Emitters[0x18]; // 0x28        
        // metadata: MPropertySuppressField
        // m_Initializers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionInitializer*> m_Initializers;
        char m_Initializers[0x18]; // 0x40        
        // metadata: MPropertySuppressField
        // m_Operators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionOperator*> m_Operators;
        char m_Operators[0x18]; // 0x58        
        // metadata: MPropertySuppressField
        // m_ForceGenerators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionForce*> m_ForceGenerators;
        char m_ForceGenerators[0x18]; // 0x70        
        // metadata: MPropertySuppressField
        // m_Constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionConstraint*> m_Constraints;
        char m_Constraints[0x18]; // 0x88        
        // metadata: MPropertySuppressField
        // m_Renderers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::CParticleFunctionRenderer*> m_Renderers;
        char m_Renderers[0x18]; // 0xa0        
        // metadata: MPropertySuppressField
        // m_Children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::ParticleChildrenInfo_t> m_Children;
        char m_Children[0x18]; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xd0[0xa8]; // 0xd0
        // metadata: MPropertySuppressField
        int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178        
        [[maybe_unused]] std::uint8_t pad_0x17c[0x94]; // 0x17c
        // metadata: MPropertyStartGroup "+Collection Options"
        // metadata: MPropertyFriendlyName "initial particles"
        int32_t m_nInitialParticles; // 0x210        
        // metadata: MPropertyFriendlyName "max particles"
        int32_t m_nMaxParticles; // 0x214        
        // metadata: MPropertyFriendlyName "group id"
        int32_t m_nGroupID; // 0x218        
        // metadata: MPropertyStartGroup "Bounding Box"
        // metadata: MPropertyFriendlyName "bounding box bloat min"
        // metadata: MVectorIsCoordinate
        Vector m_BoundingBoxMin; // 0x21c        
        // metadata: MPropertyFriendlyName "bounding box bloat max"
        // metadata: MVectorIsCoordinate
        Vector m_BoundingBoxMax; // 0x228        
        // metadata: MPropertyFriendlyName "bounding box depth sort bias"
        float m_flDepthSortBias; // 0x234        
        // metadata: MPropertyFriendlyName "sort override position CP"
        int32_t m_nSortOverridePositionCP; // 0x238        
        // metadata: MPropertyFriendlyName "infinite bounds - don't cull"
        bool m_bInfiniteBounds; // 0x23c        
        // metadata: MPropertyStartGroup "Named Values"
        // metadata: MPropertyFriendlyName "Enable Named Values (EXPERIMENTAL)"
        bool m_bEnableNamedValues; // 0x23d        
        [[maybe_unused]] std::uint8_t pad_0x23e[0x2]; // 0x23e
        // metadata: MPropertyFriendlyName "Domain Class"
        // metadata: MPropertyAttributeChoiceName "particlefield_domain"
        // metadata: MPropertyAutoRebuildOnChange
        // metadata: MPropertySuppressExpr "!m_bEnableNamedValues"
        CUtlString m_NamedValueDomain; // 0x240        
        // metadata: MPropertySuppressField
        // m_NamedValueLocals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particleslib::ParticleNamedValueSource_t*> m_NamedValueLocals;
        char m_NamedValueLocals[0x18]; // 0x248        
        // metadata: MPropertyStartGroup "+Base Properties"
        // metadata: MPropertyFriendlyName "color"
        // metadata: MPropertyColorPlusAlpha
        Color m_ConstantColor; // 0x260        
        // metadata: MPropertyFriendlyName "normal"
        // metadata: MVectorIsCoordinate
        Vector m_ConstantNormal; // 0x264        
        // metadata: MPropertyFriendlyName "radius"
        // metadata: MPropertyAttributeRange "biased 0 500"
        float m_flConstantRadius; // 0x270        
        // metadata: MPropertyFriendlyName "rotation"
        float m_flConstantRotation; // 0x274        
        // metadata: MPropertyFriendlyName "rotation speed"
        float m_flConstantRotationSpeed; // 0x278        
        // metadata: MPropertyFriendlyName "lifetime"
        float m_flConstantLifespan; // 0x27c        
        // metadata: MPropertyFriendlyName "sequence number"
        // metadata: MPropertyAttributeEditor "SequencePicker( 1 )"
        int32_t m_nConstantSequenceNumber; // 0x280        
        // metadata: MPropertyFriendlyName "sequence number 1"
        // metadata: MPropertyAttributeEditor "SequencePicker( 2 )"
        int32_t m_nConstantSequenceNumber1; // 0x284        
        // metadata: MPropertyStartGroup "Snapshot Options"
        int32_t m_nSnapshotControlPoint; // 0x288        
        [[maybe_unused]] std::uint8_t pad_0x28c[0x4]; // 0x28c
        // m_hSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshot;
        char m_hSnapshot[0x8]; // 0x290        
        // metadata: MPropertyStartGroup "Replacement Options"
        // metadata: MPropertyFriendlyName "cull replacement definition"
        // m_pszCullReplacementName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_pszCullReplacementName;
        char m_pszCullReplacementName[0x8]; // 0x298        
        // metadata: MPropertyFriendlyName "cull radius"
        float m_flCullRadius; // 0x2a0        
        // metadata: MPropertyFriendlyName "cull cost"
        float m_flCullFillCost; // 0x2a4        
        // metadata: MPropertyFriendlyName "cull control point"
        int32_t m_nCullControlPoint; // 0x2a8        
        [[maybe_unused]] std::uint8_t pad_0x2ac[0x4]; // 0x2ac
        // metadata: MPropertyFriendlyName "fallback replacement definition"
        // m_hFallback has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hFallback;
        char m_hFallback[0x8]; // 0x2b0        
        // metadata: MPropertyFriendlyName "fallback max count"
        int32_t m_nFallbackMaxCount; // 0x2b8        
        [[maybe_unused]] std::uint8_t pad_0x2bc[0x4]; // 0x2bc
        // metadata: MPropertyFriendlyName "low violence definition"
        // m_hLowViolenceDef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hLowViolenceDef;
        char m_hLowViolenceDef[0x8]; // 0x2c0        
        // metadata: MPropertyFriendlyName "reference replacement definition"
        // m_hReferenceReplacement has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hReferenceReplacement;
        char m_hReferenceReplacement[0x8]; // 0x2c8        
        // metadata: MPropertyStartGroup "Simulation Options"
        // metadata: MPropertyFriendlyName "pre-simulation time"
        float m_flPreSimulationTime; // 0x2d0        
        // metadata: MPropertyFriendlyName "freeze simulation after time"
        float m_flStopSimulationAfterTime; // 0x2d4        
        // metadata: MPropertyFriendlyName "maximum time step"
        float m_flMaximumTimeStep; // 0x2d8        
        // metadata: MPropertyFriendlyName "maximum sim tick rate"
        float m_flMaximumSimTime; // 0x2dc        
        // metadata: MPropertyFriendlyName "minimum sim tick rate"
        float m_flMinimumSimTime; // 0x2e0        
        // metadata: MPropertyFriendlyName "minimum simulation time step"
        float m_flMinimumTimeStep; // 0x2e4        
        // metadata: MPropertyFriendlyName "minimum required rendered frames"
        int32_t m_nMinimumFrames; // 0x2e8        
        // metadata: MPropertyStartGroup "Performance Options"
        // metadata: MPropertyFriendlyName "minimum CPU level"
        int32_t m_nMinCPULevel; // 0x2ec        
        // metadata: MPropertyFriendlyName "minimum GPU level"
        int32_t m_nMinGPULevel; // 0x2f0        
        // metadata: MPropertyFriendlyName "time to sleep when not drawn"
        float m_flNoDrawTimeToGoToSleep; // 0x2f4        
        // metadata: MPropertyFriendlyName "maximum draw distance"
        float m_flMaxDrawDistance; // 0x2f8        
        // metadata: MPropertyFriendlyName "start fade distance"
        float m_flStartFadeDistance; // 0x2fc        
        // metadata: MPropertyFriendlyName "maximum creation distance"
        float m_flMaxCreationDistance; // 0x300        
        // metadata: MPropertyFriendlyName "minimum free particles to aggregate"
        int32_t m_nAggregationMinAvailableParticles; // 0x304        
        // metadata: MPropertyFriendlyName "aggregation radius"
        float m_flAggregateRadius; // 0x308        
        // metadata: MPropertyFriendlyName "batch particle systems"
        bool m_bShouldBatch; // 0x30c        
        // metadata: MPropertyFriendlyName "Hitboxes fall back to render bounds"
        bool m_bShouldHitboxesFallbackToRenderBounds; // 0x30d        
        // metadata: MPropertyFriendlyName "Hitboxes fall back to snapshot"
        bool m_bShouldHitboxesFallbackToSnapshot; // 0x30e        
        // metadata: MPropertyFriendlyName "Hitboxes fall back to collision hulls"
        bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x30f        
        // metadata: MPropertyStartGroup "Rendering Options"
        // metadata: MPropertyFriendlyName "view model effect"
        // metadata: MPropertySuppressExpr "m_bScreenSpaceEffect"
        particles::InheritableBoolType_t m_nViewModelEffect; // 0x310        
        // metadata: MPropertyFriendlyName "screen space effect"
        // metadata: MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
        bool m_bScreenSpaceEffect; // 0x314        
        [[maybe_unused]] std::uint8_t pad_0x315[0x3]; // 0x315
        // metadata: MPropertyFriendlyName "target layer ID for rendering"
        CUtlSymbolLarge m_pszTargetLayerID; // 0x318        
        // metadata: MPropertyFriendlyName "control point to disable rendering if it is the camera"
        int32_t m_nSkipRenderControlPoint; // 0x320        
        // metadata: MPropertyFriendlyName "control point to only enable rendering if it is the camera"
        int32_t m_nAllowRenderControlPoint; // 0x324        
        // metadata: MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
        // metadata: MParticleAdvancedField
        bool m_bShouldSort; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x329[0x47]; // 0x329
        // metadata: MPropertySuppressField
        // m_controlPointConfigurations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::ParticleControlPointConfiguration_t> m_controlPointConfigurations;
        char m_controlPointConfigurations[0x18]; // 0x370        
        [[maybe_unused]] std::uint8_t pad_0x388[0x68];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleSystemDefinition because it is not a standard-layout class
    static_assert(sizeof(CParticleSystemDefinition) == 0x3f0);
};
