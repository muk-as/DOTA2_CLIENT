#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_SkyCamera;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSkyboxReference : public client::C_BaseEntity
    {
    public:
        WorldGroupId_t m_worldGroupId; // 0x538        
        // m_hSkyCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_SkyCamera> m_hSkyCamera;
        char m_hSkyCamera[0x4]; // 0x53c        
        
        // Datamap fields:
        // const char * worldGroupID; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkyboxReference because it is not a standard-layout class
    static_assert(sizeof(CSkyboxReference) == 0x540);
};
