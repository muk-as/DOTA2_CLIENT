#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/IParticleEffect.hpp"
namespace source2sdk
{
    namespace particles
    {
        struct IParticleCollection;
    };
};
namespace source2sdk
{
    namespace particleslib
    {
        struct CParticleProperty;
    };
};
namespace source2sdk
{
    namespace particleslib
    {
        struct PARTICLE_EHANDLE;
    };
};

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CNewParticleEffect : public source2sdk::particleslib::IParticleEffect
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particleslib::CNewParticleEffect* m_pNext; // 0x_            
            source2sdk::particleslib::CNewParticleEffect* m_pPrev; // 0x_            
            source2sdk::particles::IParticleCollection* m_pParticles; // 0x_            
            char* m_pDebugName; // 0x_            
            // start of bitfield block
            uint16_t m_bDontRemove: 1;
            uint16_t m_bRemove: 1;
            uint16_t m_bNeedsBBoxUpdate: 1;
            uint16_t m_bIsFirstFrame: 1;
            uint16_t m_bAutoUpdateBBox: 1;
            uint16_t m_bAllocated: 1;
            uint16_t m_bSimulate: 1;
            uint16_t m_bShouldPerformCullCheck: 1;
            uint16_t m_bForceNoDraw: 1;
            uint16_t m_bSuppressScreenSpaceEffect: 1;
            uint16_t m_bShouldSave: 1;
            uint16_t m_bShouldSimulateDuringGamePaused: 1;
            uint16_t m_bShouldCheckFoW: 1;
            // end of bitfield block// 13 bits
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vSortOrigin; // 0x_            
            float m_flScale; // 0x_            
            source2sdk::particleslib::PARTICLE_EHANDLE* m_hOwner; // 0x_            
            source2sdk::particleslib::CParticleProperty* m_pOwningParticleProperty; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFreezeTransitionStart; // 0x_            
            float m_flFreezeTransitionDuration; // 0x_            
            float m_flFreezeTransitionOverride; // 0x_            
            bool m_bFreezeTransitionActive; // 0x_            
            bool m_bFreezeTargetState; // 0x_            
            bool m_bCanFreeze; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_LastMin; // 0x_            
            Vector m_LastMax; // 0x_            
            CSplitScreenSlot m_nSplitScreenUser; // 0x_            
            Vector m_vecAggregationCenter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_RefCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNewParticleEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CNewParticleEffect) == 0x_);
    };
};
