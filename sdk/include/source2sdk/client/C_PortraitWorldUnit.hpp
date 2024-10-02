#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
#include "source2sdk/client/DOTAPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1c50
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_DOTA_BaseNPC
    {
    public:
        entity2::CEntityIOOutput m_OutputAnimOver; // 0x1808        
        bool m_bSuppressIntroEffects; // 0x1830        
        bool m_bIsAlternateLoadout; // 0x1831        
        bool m_bSkipBackgroundEntities; // 0x1832        
        bool m_bSpawnBackgroundModels; // 0x1833        
        bool m_bDeferredPortrait; // 0x1834        
        bool m_bShowParticleAssetModifiers; // 0x1835        
        bool m_bIgnorePortraitInfo; // 0x1836        
        bool m_bFlyingCourier; // 0x1837        
        bool m_bDisableDefaultModifiers; // 0x1838        
        [[maybe_unused]] std::uint8_t pad_0x1839[0x3]; // 0x1839
        int32_t m_nEffigyStatusEffect; // 0x183c        
        CUtlSymbolLarge m_effigySequenceName; // 0x1840        
        float m_flStartingAnimationCycle; // 0x1848        
        float m_flAnimationPlaybackSpeed; // 0x184c        
        float m_flRareLoadoutAnimChance; // 0x1850        
        bool m_bSetDefaultActivityOnSequenceFinished; // 0x1854        
        [[maybe_unused]] std::uint8_t pad_0x1855[0x3]; // 0x1855
        // m_vecActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbolLarge> m_vecActivityModifiers;
        char m_vecActivityModifiers[0x18]; // 0x1858        
        client::DOTAPortraitEnvironmentType_t m_environment; // 0x1870        
        [[maybe_unused]] std::uint8_t pad_0x1874[0x4]; // 0x1874
        client::StartupBehavior_t m_nStartupBehavior; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x187c[0x1e4]; // 0x187c
        CUtlSymbolLarge m_cameraName; // 0x1a60        
        [[maybe_unused]] std::uint8_t pad_0x1a68[0x50]; // 0x1a68
        client::ParticleIndex_t m_nPortraitParticle; // 0x1ab8        
        int32_t m_nCourierType; // 0x1abc        
        [[maybe_unused]] std::uint8_t pad_0x1ac0[0x190];
        
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
    static_assert(sizeof(C_PortraitWorldUnit) == 0x1c50);
};
