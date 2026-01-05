#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct NavAreaSave_t
        {
        public:
            // m_hDeformable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDeformable;
            char m_hDeformable[0x_]; // 0x_            
            std::uint32_t m_nOtherAreaIdGlobalOrLocal; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::NavAreaSave_t, m_hDeformable) == 0x_);
        static_assert(offsetof(source2sdk::server::NavAreaSave_t, m_nOtherAreaIdGlobalOrLocal) == 0x_);
        
        static_assert(sizeof(source2sdk::server::NavAreaSave_t) == 0x_);
    };
};
