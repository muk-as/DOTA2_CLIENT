#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CSkyCamera;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSkyboxReference : public source2sdk::server::CBaseEntity
        {
        public:
            WorldGroupId_t m_worldGroupId; // 0x4e0            
            // m_hSkyCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CSkyCamera> m_hSkyCamera;
            char m_hSkyCamera[0x4]; // 0x4e4            
            
            // Datamap fields:
            // const char * worldGroupID; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSkyboxReference because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSkyboxReference) == 0x4e8);
    };
};
