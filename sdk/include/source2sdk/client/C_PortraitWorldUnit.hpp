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
        // Size: 0x1e60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x1a18            
            bool m_bSuppressIntroEffects; // 0x1a40            
            bool m_bIsAlternateLoadout; // 0x1a41            
            bool m_bSkipBackgroundEntities; // 0x1a42            
            bool m_bSpawnBackgroundModels; // 0x1a43            
            bool m_bDeferredPortrait; // 0x1a44            
            bool m_bShowParticleAssetModifiers; // 0x1a45            
            bool m_bIgnorePortraitInfo; // 0x1a46            
            bool m_bFlyingCourier; // 0x1a47            
            bool m_bDisableDefaultModifiers; // 0x1a48            
            uint8_t _pad1a49[0x3]; // 0x1a49
            std::int32_t m_nEffigyStatusEffect; // 0x1a4c            
            CUtlSymbolLarge m_effigySequenceName; // 0x1a50            
            float m_flStartingAnimationCycle; // 0x1a58            
            float m_flAnimationPlaybackSpeed; // 0x1a5c            
            float m_flRareLoadoutAnimChance; // 0x1a60            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x18]; // 0x1a68            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x1a80            
            uint8_t _pad1a84[0x4]; // 0x1a84
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x1a88            
            uint8_t _pad1a8c[0x1e4]; // 0x1a8c
            CUtlSymbolLarge m_cameraName; // 0x1c70            
            uint8_t _pad1c78[0x50]; // 0x1c78
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1cc8            
            std::int32_t m_nCourierType; // 0x1ccc            
            uint8_t _pad1cd0[0x190];
            
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
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1e60);
    };
};
