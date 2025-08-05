#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/RelativeLocationType_t.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CRelativeLocation
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            source2sdk::server::RelativeLocationType_t m_Type; // 0x18            
            uint8_t _pad0019[0x3]; // 0x19
            Vector m_vRelativeOffset; // 0x1c            
            Vector m_vWorldSpacePos; // 0x28            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_Type) == 0x18);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_vRelativeOffset) == 0x1c);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_vWorldSpacePos) == 0x28);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_hEntity) == 0x34);
        
        static_assert(sizeof(source2sdk::server::CRelativeLocation) == 0x38);
    };
};
