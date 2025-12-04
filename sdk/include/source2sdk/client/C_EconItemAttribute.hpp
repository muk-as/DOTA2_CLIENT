#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/attrib_definition_index_t.hpp"

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
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
        // static metadata: MNetworkVarNames "float m_flValue"
        #pragma pack(push, 1)
        class C_EconItemAttribute
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::attrib_definition_index_t m_iAttributeDefinitionIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iRawValue32"
            float m_flValue; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_EconItemAttribute, m_iAttributeDefinitionIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::C_EconItemAttribute, m_flValue) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_EconItemAttribute) == 0x_);
    };
};
