#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnPlane_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRegionSVM
        {
        public:
            // m_Planes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnPlane_t> m_Planes;
            char m_Planes[0x18]; // 0x0            
            // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_Nodes;
            char m_Nodes[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CRegionSVM, m_Planes) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::CRegionSVM, m_Nodes) == 0x18);
        
        static_assert(sizeof(source2sdk::physicslib::CRegionSVM) == 0x30);
    };
};
