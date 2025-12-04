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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CUnitOrders
        {
        public:
            // m_nUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nUnits;
            char m_nUnits[0x_]; // 0x_            
            Vector m_vPosition; // 0x_            
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x_            
            std::int32_t m_nOrderSequenceNumber; // 0x_            
            std::int32_t m_nOrderType; // 0x_            
            CEntityIndex m_nTargetIndex; // 0x_            
            CEntityIndex m_nAbilityIndex; // 0x_            
            std::uint32_t m_nFlags; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nUnits) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nIssuerPlayerIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nOrderSequenceNumber) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nOrderType) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nTargetIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nAbilityIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CUnitOrders, m_nFlags) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CUnitOrders) == 0x_);
    };
};
