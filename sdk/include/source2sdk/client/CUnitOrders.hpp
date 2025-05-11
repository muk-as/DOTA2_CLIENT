#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x40
        #pragma pack(push, 1)
        class CUnitOrders
        {
        public:
            // m_nUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nUnits;
            char m_nUnits[0x18]; // 0x0            
            Vector m_vPosition; // 0x18            
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x24            
            std::int32_t m_nOrderSequenceNumber; // 0x28            
            std::int32_t m_nOrderType; // 0x2c            
            CEntityIndex m_nTargetIndex; // 0x30            
            CEntityIndex m_nAbilityIndex; // 0x34            
            std::uint32_t m_nFlags; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nUnits) == 0x0);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_vPosition) == 0x18);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nIssuerPlayerIndex) == 0x24);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nOrderSequenceNumber) == 0x28);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nOrderType) == 0x2c);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nTargetIndex) == 0x30);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nAbilityIndex) == 0x34);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nFlags) == 0x38);
        
        static_assert(sizeof(source2sdk::client::CUnitOrders) == 0x40);
    };
};
