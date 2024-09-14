#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7f8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicNPCCounter : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMinCountAll; // 0x4b8        
        entity2::CEntityIOOutput m_OnMaxCountAll; // 0x4e0        
        // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactorAll;
        char m_OnFactorAll[0x28]; // 0x508        
        // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
        char m_OnMinPlayerDistAll[0x28]; // 0x530        
        entity2::CEntityIOOutput m_OnMinCount_1; // 0x558        
        entity2::CEntityIOOutput m_OnMaxCount_1; // 0x580        
        // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_1;
        char m_OnFactor_1[0x28]; // 0x5a8        
        // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
        char m_OnMinPlayerDist_1[0x28]; // 0x5d0        
        entity2::CEntityIOOutput m_OnMinCount_2; // 0x5f8        
        entity2::CEntityIOOutput m_OnMaxCount_2; // 0x620        
        // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_2;
        char m_OnFactor_2[0x28]; // 0x648        
        // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
        char m_OnMinPlayerDist_2[0x28]; // 0x670        
        entity2::CEntityIOOutput m_OnMinCount_3; // 0x698        
        entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6c0        
        // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnFactor_3;
        char m_OnFactor_3[0x28]; // 0x6e8        
        // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
        char m_OnMinPlayerDist_3[0x28]; // 0x710        
        CEntityHandle m_hSource; // 0x738        
        [[maybe_unused]] std::uint8_t pad_0x73c[0x4]; // 0x73c
        CUtlSymbolLarge m_iszSourceEntityName; // 0x740        
        float m_flDistanceMax; // 0x748        
        bool m_bDisabled; // 0x74c        
        [[maybe_unused]] std::uint8_t pad_0x74d[0x3]; // 0x74d
        int32_t m_nMinCountAll; // 0x750        
        int32_t m_nMaxCountAll; // 0x754        
        int32_t m_nMinFactorAll; // 0x758        
        int32_t m_nMaxFactorAll; // 0x75c        
        [[maybe_unused]] std::uint8_t pad_0x760[0x8]; // 0x760
        CUtlSymbolLarge m_iszNPCClassname_1; // 0x768        
        int32_t m_nNPCState_1; // 0x770        
        bool m_bInvertState_1; // 0x774        
        [[maybe_unused]] std::uint8_t pad_0x775[0x3]; // 0x775
        int32_t m_nMinCount_1; // 0x778        
        int32_t m_nMaxCount_1; // 0x77c        
        int32_t m_nMinFactor_1; // 0x780        
        int32_t m_nMaxFactor_1; // 0x784        
        [[maybe_unused]] std::uint8_t pad_0x788[0x4]; // 0x788
        float m_flDefaultDist_1; // 0x78c        
        CUtlSymbolLarge m_iszNPCClassname_2; // 0x790        
        int32_t m_nNPCState_2; // 0x798        
        bool m_bInvertState_2; // 0x79c        
        [[maybe_unused]] std::uint8_t pad_0x79d[0x3]; // 0x79d
        int32_t m_nMinCount_2; // 0x7a0        
        int32_t m_nMaxCount_2; // 0x7a4        
        int32_t m_nMinFactor_2; // 0x7a8        
        int32_t m_nMaxFactor_2; // 0x7ac        
        [[maybe_unused]] std::uint8_t pad_0x7b0[0x4]; // 0x7b0
        float m_flDefaultDist_2; // 0x7b4        
        CUtlSymbolLarge m_iszNPCClassname_3; // 0x7b8        
        int32_t m_nNPCState_3; // 0x7c0        
        bool m_bInvertState_3; // 0x7c4        
        [[maybe_unused]] std::uint8_t pad_0x7c5[0x3]; // 0x7c5
        int32_t m_nMinCount_3; // 0x7c8        
        int32_t m_nMaxCount_3; // 0x7cc        
        int32_t m_nMinFactor_3; // 0x7d0        
        int32_t m_nMaxFactor_3; // 0x7d4        
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x4]; // 0x7d8
        float m_flDefaultDist_3; // 0x7dc        
        [[maybe_unused]] std::uint8_t pad_0x7e0[0x18];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CLogicNPCCounterSetNPCCounterThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
    static_assert(sizeof(CLogicNPCCounter) == 0x7f8);
};
