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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTAWorldParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nType; // 0x_            
            source2sdk::client::ParticleIndex_t m_iClientEffectIndex; // 0x_            
            CUtlSymbolLarge m_szEffectName; // 0x_            
            CUtlSymbolLarge m_szTargetName; // 0x_            
            CUtlSymbolLarge m_szControlPoint; // 0x_            
            source2sdk::animationsystem::HSequence m_hOverrideSequence; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
            char m_hOverrideModel[0x_]; // 0x_            
            Vector m_vModelScale; // 0x_            
            std::int32_t m_nSkinOverride; // 0x_            
            bool m_bDayTime; // 0x_            
            bool m_bNightTime; // 0x_            
            bool m_bShowInFow; // 0x_            
            bool m_bShowWhileDynamicWeatherActive; // 0x_            
            bool m_bAnimateDuringGameplayPause; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWorldParticleSystem) == 0x_);
    };
};
