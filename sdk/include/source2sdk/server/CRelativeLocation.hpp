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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CRelativeLocation
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::RelativeLocationType_t m_Type; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vRelativeOffset; // 0x_            
            VectorWS m_vWorldSpacePos; // 0x_            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_vRelativeOffset) == 0x_);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_vWorldSpacePos) == 0x_);
        static_assert(offsetof(source2sdk::server::CRelativeLocation, m_hEntity) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CRelativeLocation) == 0x_);
    };
};
