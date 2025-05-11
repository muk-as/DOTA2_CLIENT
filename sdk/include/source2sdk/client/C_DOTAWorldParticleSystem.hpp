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
        // Size: 0x818
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTAWorldParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nType; // 0x7d0            
            source2sdk::client::ParticleIndex_t m_iClientEffectIndex; // 0x7d4            
            CUtlSymbolLarge m_szEffectName; // 0x7d8            
            CUtlSymbolLarge m_szTargetName; // 0x7e0            
            CUtlSymbolLarge m_szControlPoint; // 0x7e8            
            source2sdk::animationsystem::HSequence m_hOverrideSequence; // 0x7f0            
            uint8_t _pad07f4[0x4]; // 0x7f4
            // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
            char m_hOverrideModel[0x8]; // 0x7f8            
            Vector m_vModelScale; // 0x800            
            std::int32_t m_nSkinOverride; // 0x80c            
            bool m_bDayTime; // 0x810            
            bool m_bNightTime; // 0x811            
            bool m_bShowInFow; // 0x812            
            bool m_bShowWhileDynamicWeatherActive; // 0x813            
            bool m_bAnimateDuringGameplayPause; // 0x814            
            uint8_t _pad0815[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWorldParticleSystem) == 0x818);
    };
};
