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
        // Size: 0x1e90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x1a48            
            bool m_bSuppressIntroEffects; // 0x1a70            
            bool m_bIsAlternateLoadout; // 0x1a71            
            bool m_bSkipBackgroundEntities; // 0x1a72            
            bool m_bSpawnBackgroundModels; // 0x1a73            
            bool m_bDeferredPortrait; // 0x1a74            
            bool m_bShowParticleAssetModifiers; // 0x1a75            
            bool m_bIgnorePortraitInfo; // 0x1a76            
            bool m_bFlyingCourier; // 0x1a77            
            bool m_bDisableDefaultModifiers; // 0x1a78            
            uint8_t _pad1a79[0x3]; // 0x1a79
            std::int32_t m_nEffigyStatusEffect; // 0x1a7c            
            CUtlSymbolLarge m_effigySequenceName; // 0x1a80            
            float m_flStartingAnimationCycle; // 0x1a88            
            float m_flAnimationPlaybackSpeed; // 0x1a8c            
            float m_flRareLoadoutAnimChance; // 0x1a90            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x1a94            
            uint8_t _pad1a95[0x3]; // 0x1a95
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x18]; // 0x1a98            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x1ab0            
            uint8_t _pad1ab4[0x4]; // 0x1ab4
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x1ab8            
            uint8_t _pad1abc[0x1e4]; // 0x1abc
            CUtlSymbolLarge m_cameraName; // 0x1ca0            
            uint8_t _pad1ca8[0x50]; // 0x1ca8
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1cf8            
            std::int32_t m_nCourierType; // 0x1cfc            
            uint8_t _pad1d00[0x190];
            
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
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1e90);
    };
};
