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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1e50
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x1a00            
            bool m_bSuppressIntroEffects; // 0x1a28            
            bool m_bIsAlternateLoadout; // 0x1a29            
            bool m_bSkipBackgroundEntities; // 0x1a2a            
            bool m_bSpawnBackgroundModels; // 0x1a2b            
            bool m_bDeferredPortrait; // 0x1a2c            
            bool m_bShowParticleAssetModifiers; // 0x1a2d            
            bool m_bIgnorePortraitInfo; // 0x1a2e            
            bool m_bFlyingCourier; // 0x1a2f            
            bool m_bDisableDefaultModifiers; // 0x1a30            
            uint8_t _pad1a31[0x3]; // 0x1a31
            std::int32_t m_nEffigyStatusEffect; // 0x1a34            
            CUtlSymbolLarge m_effigySequenceName; // 0x1a38            
            float m_flStartingAnimationCycle; // 0x1a40            
            float m_flAnimationPlaybackSpeed; // 0x1a44            
            float m_flRareLoadoutAnimChance; // 0x1a48            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x1a4c            
            uint8_t _pad1a4d[0x3]; // 0x1a4d
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x18]; // 0x1a50            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x1a68            
            uint8_t _pad1a6c[0x4]; // 0x1a6c
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x1a70            
            uint8_t _pad1a74[0x1e4]; // 0x1a74
            CUtlSymbolLarge m_cameraName; // 0x1c58            
            uint8_t _pad1c60[0x50]; // 0x1c60
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1cb0            
            std::int32_t m_nCourierType; // 0x1cb4            
            uint8_t _pad1cb8[0x198];
            
            // Datamap fields:
            // CUtlSymbolLarge activity_modifier; // 0x7fffffff
            // bool skip_pet_spawn; // 0x7fffffff
            // int32_t item_def0; // 0x7fffffff
            // int32_t item_def1; // 0x7fffffff
            // int32_t item_def2; // 0x7fffffff
            // int32_t item_def3; // 0x7fffffff
            // int32_t item_def4; // 0x7fffffff
            // int32_t item_def5; // 0x7fffffff
            // int32_t item_def6; // 0x7fffffff
            // int32_t item_def7; // 0x7fffffff
            // int32_t model_index; // 0x7fffffff
            // int32_t skin_override; // 0x7fffffff
            // bool StartDisabled; // 0x7fffffff
            // CUtlString activity; // 0x7fffffff
            // int32_t style_index0; // 0x7fffffff
            // int32_t style_index1; // 0x7fffffff
            // int32_t style_index2; // 0x7fffffff
            // int32_t style_index3; // 0x7fffffff
            // int32_t style_index4; // 0x7fffffff
            // int32_t style_index5; // 0x7fffffff
            // int32_t style_index6; // 0x7fffffff
            // int32_t style_index7; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1e50);
    };
};
