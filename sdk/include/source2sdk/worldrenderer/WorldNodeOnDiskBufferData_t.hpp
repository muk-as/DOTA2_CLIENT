#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderInputLayoutField_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct WorldNodeOnDiskBufferData_t
        {
        public:
            std::int32_t m_nElementCount; // 0x_            
            std::int32_t m_nElementSizeInBytes; // 0x_            
            // m_inputLayoutFields has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::RenderInputLayoutField_t> m_inputLayoutFields;
            char m_inputLayoutFields[0x_]; // 0x_            
            // m_pData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_pData;
            char m_pData[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t, m_nElementCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t, m_nElementSizeInBytes) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t, m_inputLayoutFields) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t, m_pData) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::WorldNodeOnDiskBufferData_t) == 0x_);
    };
};
