#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarsAtomic
        #pragma pack(push, 1)
        class CNetworkOriginCellCoordQuantizedVector
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "cellx"
            std::uint16_t m_cellX; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "celly"
            std::uint16_t m_cellY; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "cellz"
            std::uint16_t m_cellZ; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_nOutsideWorld; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "13"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "posx"
            CNetworkedQuantizedFloat m_vecX; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "13"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "posy"
            CNetworkedQuantizedFloat m_vecY; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "13"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkChangeCallback "OnCellChanged"
            // metadata: MNetworkPriority "31"
            // metadata: MNetworkSerializer "posz"
            CNetworkedQuantizedFloat m_vecZ; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellX) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellY) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_cellZ) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_nOutsideWorld) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecX) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecY) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector, m_vecZ) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNetworkOriginCellCoordQuantizedVector) == 0x_);
    };
};
