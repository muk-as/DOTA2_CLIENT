#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/server/Relationship_t.hpp"
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
        // Standard-layout class: false
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RelationshipOverride_t : public source2sdk::server::Relationship_t
        {
        public:
            // entity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> entity;
            char entity[0x4]; // 0x8            
            source2sdk::client::Class_T classType; // 0xc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in RelationshipOverride_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::RelationshipOverride_t) == 0x10);
    };
};
