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
        // Size: 0x1c20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_DOTA_BaseNPC
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OutputAnimOver; // 0x17d8            
            bool m_bSuppressIntroEffects; // 0x1800            
            bool m_bIsAlternateLoadout; // 0x1801            
            bool m_bSkipBackgroundEntities; // 0x1802            
            bool m_bSpawnBackgroundModels; // 0x1803            
            bool m_bDeferredPortrait; // 0x1804            
            bool m_bShowParticleAssetModifiers; // 0x1805            
            bool m_bIgnorePortraitInfo; // 0x1806            
            bool m_bFlyingCourier; // 0x1807            
            bool m_bDisableDefaultModifiers; // 0x1808            
            uint8_t _pad1809[0x3]; // 0x1809
            std::int32_t m_nEffigyStatusEffect; // 0x180c            
            CUtlSymbolLarge m_effigySequenceName; // 0x1810            
            float m_flStartingAnimationCycle; // 0x1818            
            float m_flAnimationPlaybackSpeed; // 0x181c            
            float m_flRareLoadoutAnimChance; // 0x1820            
            bool m_bSetDefaultActivityOnSequenceFinished; // 0x1824            
            uint8_t _pad1825[0x3]; // 0x1825
            // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
            char m_vecActivityModifiers[0x18]; // 0x1828            
            source2sdk::client::DOTAPortraitEnvironmentType_t m_environment; // 0x1840            
            uint8_t _pad1844[0x4]; // 0x1844
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0x1848            
            uint8_t _pad184c[0x1e4]; // 0x184c
            CUtlSymbolLarge m_cameraName; // 0x1a30            
            uint8_t _pad1a38[0x50]; // 0x1a38
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1a88            
            std::int32_t m_nCourierType; // 0x1a8c            
            uint8_t _pad1a90[0x190];
            
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
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1c20);
    };
};
