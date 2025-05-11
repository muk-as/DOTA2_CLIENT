#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CPathQueryComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
        #pragma pack(push, 1)
        class CPathMover : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPathQueryComponent"
            // metadata: MNetworkAlias "CPathQueryComponent"
            // metadata: MNetworkTypeAlias "CPathQueryComponent"
            source2sdk::server::CPathQueryComponent m_CPathQueryComponent; // 0x4e0            
            // m_vecPathNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CMoverPathNode>> m_vecPathNodes;
            char m_vecPathNodes[0x18]; // 0x570            
            uint8_t _pad0588[0x8]; // 0x588
            CTransform m_xInitialPathWorldToLocal; // 0x590            
            bool m_bClosedLoop; // 0x5b0            
            uint8_t _pad05b1[0x5f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMover) == 0x610);
    };
};
