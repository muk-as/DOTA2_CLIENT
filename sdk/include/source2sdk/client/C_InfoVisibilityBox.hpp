#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x528
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "int m_nMode"
        // static metadata: MNetworkVarNames "Vector m_vBoxSize"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class C_InfoVisibilityBox : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0510[0x4]; // 0x510
            // metadata: MNetworkEnable
            std::int32_t m_nMode; // 0x514            
            // metadata: MNetworkEnable
            Vector m_vBoxSize; // 0x518            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x524            
            uint8_t _pad0525[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_InfoVisibilityBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_InfoVisibilityBox) == 0x528);
    };
};
