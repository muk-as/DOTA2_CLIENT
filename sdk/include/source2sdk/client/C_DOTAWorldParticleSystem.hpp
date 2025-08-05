#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTAWorldParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nType; // 0x998            
            source2sdk::client::ParticleIndex_t m_iClientEffectIndex; // 0x99c            
            CUtlSymbolLarge m_szEffectName; // 0x9a0            
            CUtlSymbolLarge m_szTargetName; // 0x9a8            
            CUtlSymbolLarge m_szControlPoint; // 0x9b0            
            source2sdk::animationsystem::HSequence m_hOverrideSequence; // 0x9b8            
            uint8_t _pad09bc[0x4]; // 0x9bc
            // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
            char m_hOverrideModel[0x8]; // 0x9c0            
            Vector m_vModelScale; // 0x9c8            
            std::int32_t m_nSkinOverride; // 0x9d4            
            bool m_bDayTime; // 0x9d8            
            bool m_bNightTime; // 0x9d9            
            bool m_bShowInFow; // 0x9da            
            bool m_bShowWhileDynamicWeatherActive; // 0x9db            
            bool m_bAnimateDuringGameplayPause; // 0x9dc            
            uint8_t _pad09dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWorldParticleSystem) == 0x9e0);
    };
};
