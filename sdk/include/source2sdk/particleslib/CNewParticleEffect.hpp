#pragma once
#include "source2sdk/particleslib/IParticleEffect.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    class IParticleCollection;
};

namespace source2sdk::particleslib
{
    class CParticleProperty;
};

namespace source2sdk::particleslib
{
    class PARTICLE_EHANDLE__;
};

namespace source2sdk::particleslib
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CNewParticleEffect : public particleslib::IParticleEffect
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        particleslib::CNewParticleEffect* m_pNext; // 0x10        
        particleslib::CNewParticleEffect* m_pPrev; // 0x18        
        particles::IParticleCollection* m_pParticles; // 0x20        
        char* m_pDebugName; // 0x28        
        // start of bitfield block at 0x30
        uint16_t m_bDontRemove: 1;
        uint16_t m_bRemove: 1;
        uint16_t m_bNeedsBBoxUpdate: 1;
        uint16_t m_bIsFirstFrame: 1;
        uint16_t m_bAutoUpdateBBox: 1;
        uint16_t m_bAllocated: 1;
        uint16_t m_bSimulate: 1;
        uint16_t m_bShouldPerformCullCheck: 1;
        uint16_t m_bForceNoDraw: 1;
        uint16_t m_bShouldSave: 1;
        uint16_t m_bDisableAggregation: 1;
        uint16_t m_bShouldSimulateDuringGamePaused: 1;
        uint16_t m_bShouldCheckFoW: 1;
        // end of bitfield block // 13 bits
        [[maybe_unused]] std::uint8_t pad_0x32[0xe]; // 0x32
        Vector m_vSortOrigin; // 0x40        
        float m_flScale; // 0x4c        
        particleslib::PARTICLE_EHANDLE__* m_hOwner; // 0x50        
        particleslib::CParticleProperty* m_pOwningParticleProperty; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x60[0x10]; // 0x60
        float m_flFreezeTransitionStart; // 0x70        
        float m_flFreezeTransitionDuration; // 0x74        
        float m_flFreezeTransitionOverride; // 0x78        
        bool m_bFreezeTransitionActive; // 0x7c        
        bool m_bFreezeTargetState; // 0x7d        
        bool m_bCanFreeze; // 0x7e        
        [[maybe_unused]] std::uint8_t pad_0x7f[0x1]; // 0x7f
        Vector m_LastMin; // 0x80        
        Vector m_LastMax; // 0x8c        
        CSplitScreenSlot m_nSplitScreenUser; // 0x98        
        Vector m_vecAggregationCenter; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x18]; // 0xa8
        int32_t m_RefCount; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNewParticleEffect because it is not a standard-layout class
    static_assert(sizeof(CNewParticleEffect) == 0xc8);
};
