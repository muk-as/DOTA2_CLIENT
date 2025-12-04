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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicNPCCounter : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMinCountAll; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCountAll; // 0x_            
            // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactorAll;
            char m_OnFactorAll[0x_]; // 0x_            
            // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
            char m_OnMinPlayerDistAll[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_1; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_1; // 0x_            
            // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_1;
            char m_OnFactor_1[0x_]; // 0x_            
            // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
            char m_OnMinPlayerDist_1[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_2; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_2; // 0x_            
            // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_2;
            char m_OnFactor_2[0x_]; // 0x_            
            // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
            char m_OnMinPlayerDist_2[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_3; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_3; // 0x_            
            // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_3;
            char m_OnFactor_3[0x_]; // 0x_            
            // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
            char m_OnMinPlayerDist_3[0x_]; // 0x_            
            CEntityHandle m_hSource; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSourceEntityName; // 0x_            
            float m_flDistanceMax; // 0x_            
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMinCountAll; // 0x_            
            std::int32_t m_nMaxCountAll; // 0x_            
            std::int32_t m_nMinFactorAll; // 0x_            
            std::int32_t m_nMaxFactorAll; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszNPCClassname_1; // 0x_            
            std::int32_t m_nNPCState_1; // 0x_            
            bool m_bInvertState_1; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMinCount_1; // 0x_            
            std::int32_t m_nMaxCount_1; // 0x_            
            std::int32_t m_nMinFactor_1; // 0x_            
            std::int32_t m_nMaxFactor_1; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDefaultDist_1; // 0x_            
            CUtlSymbolLarge m_iszNPCClassname_2; // 0x_            
            std::int32_t m_nNPCState_2; // 0x_            
            bool m_bInvertState_2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMinCount_2; // 0x_            
            std::int32_t m_nMaxCount_2; // 0x_            
            std::int32_t m_nMinFactor_2; // 0x_            
            std::int32_t m_nMaxFactor_2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDefaultDist_2; // 0x_            
            CUtlSymbolLarge m_iszNPCClassname_3; // 0x_            
            std::int32_t m_nNPCState_3; // 0x_            
            bool m_bInvertState_3; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMinCount_3; // 0x_            
            std::int32_t m_nMaxCount_3; // 0x_            
            std::int32_t m_nMinFactor_3; // 0x_            
            std::int32_t m_nMaxFactor_3; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDefaultDist_3; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSourceEntity; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void CLogicNPCCounterSetNPCCounterThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNPCCounter) == 0x_);
    };
};
