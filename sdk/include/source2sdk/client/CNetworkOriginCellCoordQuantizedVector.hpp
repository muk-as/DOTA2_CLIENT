#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarsAtomic
    #pragma pack(push, 1)
    class CNetworkOriginCellCoordQuantizedVector
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "cellx"
        uint16_t m_cellX; // 0x10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "celly"
        uint16_t m_cellY; // 0x12        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "cellz"
        uint16_t m_cellZ; // 0x14        
        // metadata: MNetworkEnable
        uint16_t m_nOutsideWorld; // 0x16        
        // metadata: MNetworkBitCount "13"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "posx"
        CNetworkedQuantizedFloat m_vecX; // 0x18        
        // metadata: MNetworkBitCount "13"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "posy"
        CNetworkedQuantizedFloat m_vecY; // 0x20        
        // metadata: MNetworkBitCount "13"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkChangeCallback "OnCellChanged"
        // metadata: MNetworkPriority "31"
        // metadata: MNetworkSerializer "posz"
        CNetworkedQuantizedFloat m_vecZ; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_cellX) == 0x10);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_cellY) == 0x12);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_cellZ) == 0x14);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_nOutsideWorld) == 0x16);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_vecX) == 0x18);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_vecY) == 0x20);
    static_assert(offsetof(CNetworkOriginCellCoordQuantizedVector, m_vecZ) == 0x28);
    
    static_assert(sizeof(CNetworkOriginCellCoordQuantizedVector) == 0x30);
};
