#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x820
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicNPCCounter : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMinCountAll; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCountAll; // 0x508            
            // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactorAll;
            char m_OnFactorAll[0x28]; // 0x530            
            // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
            char m_OnMinPlayerDistAll[0x28]; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_1; // 0x580            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_1; // 0x5a8            
            // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_1;
            char m_OnFactor_1[0x28]; // 0x5d0            
            // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
            char m_OnMinPlayerDist_1[0x28]; // 0x5f8            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_2; // 0x620            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_2; // 0x648            
            // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_2;
            char m_OnFactor_2[0x28]; // 0x670            
            // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
            char m_OnMinPlayerDist_2[0x28]; // 0x698            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_3; // 0x6c0            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6e8            
            // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_3;
            char m_OnFactor_3[0x28]; // 0x710            
            // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
            char m_OnMinPlayerDist_3[0x28]; // 0x738            
            CEntityHandle m_hSource; // 0x760            
            uint8_t _pad0764[0x4]; // 0x764
            CUtlSymbolLarge m_iszSourceEntityName; // 0x768            
            float m_flDistanceMax; // 0x770            
            bool m_bDisabled; // 0x774            
            uint8_t _pad0775[0x3]; // 0x775
            std::int32_t m_nMinCountAll; // 0x778            
            std::int32_t m_nMaxCountAll; // 0x77c            
            std::int32_t m_nMinFactorAll; // 0x780            
            std::int32_t m_nMaxFactorAll; // 0x784            
            uint8_t _pad0788[0x8]; // 0x788
            CUtlSymbolLarge m_iszNPCClassname_1; // 0x790            
            std::int32_t m_nNPCState_1; // 0x798            
            bool m_bInvertState_1; // 0x79c            
            uint8_t _pad079d[0x3]; // 0x79d
            std::int32_t m_nMinCount_1; // 0x7a0            
            std::int32_t m_nMaxCount_1; // 0x7a4            
            std::int32_t m_nMinFactor_1; // 0x7a8            
            std::int32_t m_nMaxFactor_1; // 0x7ac            
            uint8_t _pad07b0[0x4]; // 0x7b0
            float m_flDefaultDist_1; // 0x7b4            
            CUtlSymbolLarge m_iszNPCClassname_2; // 0x7b8            
            std::int32_t m_nNPCState_2; // 0x7c0            
            bool m_bInvertState_2; // 0x7c4            
            uint8_t _pad07c5[0x3]; // 0x7c5
            std::int32_t m_nMinCount_2; // 0x7c8            
            std::int32_t m_nMaxCount_2; // 0x7cc            
            std::int32_t m_nMinFactor_2; // 0x7d0            
            std::int32_t m_nMaxFactor_2; // 0x7d4            
            uint8_t _pad07d8[0x4]; // 0x7d8
            float m_flDefaultDist_2; // 0x7dc            
            CUtlSymbolLarge m_iszNPCClassname_3; // 0x7e0            
            std::int32_t m_nNPCState_3; // 0x7e8            
            bool m_bInvertState_3; // 0x7ec            
            uint8_t _pad07ed[0x3]; // 0x7ed
            std::int32_t m_nMinCount_3; // 0x7f0            
            std::int32_t m_nMaxCount_3; // 0x7f4            
            std::int32_t m_nMinFactor_3; // 0x7f8            
            std::int32_t m_nMaxFactor_3; // 0x7fc            
            uint8_t _pad0800[0x4]; // 0x800
            float m_flDefaultDist_3; // 0x804            
            uint8_t _pad0808[0x18];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CLogicNPCCounterSetNPCCounterThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNPCCounter) == 0x820);
    };
};
