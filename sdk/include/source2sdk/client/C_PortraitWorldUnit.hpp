#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/DOTAPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x_            
            bool m_bSuppressIntroEffects; // 0x_            
            bool m_bIsAlternateLoadout; // 0x_            
            bool m_bSkipBackgroundEntities; // 0x_            
            bool m_bSpawnBackgroundModels; // 0x_            
            bool m_bDeferredPortrait; // 0x_            
            bool m_bShowParticleAssetModifiers; // 0x_            
            bool m_bIgnorePortraitInfo; // 0x_            
            bool m_bFlyingCourier; // 0x_            
            bool m_bDisableDefaultModifiers; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nEffigyStatusEffect; // 0x_            
            CUtlSymbolLarge m_effigySequenceName; // 0x_            
            float m_flStartingAnimationCycle; // 0x_            
            float m_flAnimationPlaybackSpeed; // 0x_            
            float m_flRareLoadoutAnimChance; // 0x_            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x_]; // 0x_            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_cameraName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x_            
            std::int32_t m_nCourierType; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge activity_modifier; // 0x_
            // bool skip_pet_spawn; // 0x_
            // int32_t item_def0; // 0x_
            // int32_t item_def1; // 0x_
            // int32_t item_def2; // 0x_
            // int32_t item_def3; // 0x_
            // int32_t item_def4; // 0x_
            // int32_t item_def5; // 0x_
            // int32_t item_def6; // 0x_
            // int32_t item_def7; // 0x_
            // int32_t model_index; // 0x_
            // int32_t skin_override; // 0x_
            // bool StartDisabled; // 0x_
            // CUtlString activity; // 0x_
            // int32_t style_index0; // 0x_
            // int32_t style_index1; // 0x_
            // int32_t style_index2; // 0x_
            // int32_t style_index3; // 0x_
            // int32_t style_index4; // 0x_
            // int32_t style_index5; // 0x_
            // int32_t style_index6; // 0x_
            // int32_t style_index7; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x_);
    };
};
