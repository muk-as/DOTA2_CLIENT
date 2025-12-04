#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/EntityIOConnectionData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct EntityKeyValueData_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_connections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::EntityIOConnectionData_t> m_connections;
            char m_connections[0x_]; // 0x_            
            CUtlBinaryBlock m_keyValuesData; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::EntityKeyValueData_t, m_connections) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::EntityKeyValueData_t, m_keyValuesData) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::EntityKeyValueData_t) == 0x_);
    };
};
