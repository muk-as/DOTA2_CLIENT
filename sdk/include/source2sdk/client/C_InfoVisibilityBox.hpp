#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "int m_nMode"
    // static metadata: MNetworkVarNames "Vector m_vBoxSize"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    #pragma pack(push, 1)
    class C_InfoVisibilityBox : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x4]; // 0x560
        // metadata: MNetworkEnable
        int32_t m_nMode; // 0x564        
        // metadata: MNetworkEnable
        Vector m_vBoxSize; // 0x568        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x575[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_InfoVisibilityBox because it is not a standard-layout class
    static_assert(sizeof(C_InfoVisibilityBox) == 0x578);
};
