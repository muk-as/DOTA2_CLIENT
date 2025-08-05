#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
        // static metadata: MNetworkVarNames "bool m_bCheapEffect"
        #pragma pack(push, 1)
        class C_EntityFlame : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntAttached;
            char m_hEntAttached[0x4]; // 0x5e8            
            uint8_t _pad05ec[0x24]; // 0x5ec
            // m_hOldAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldAttached;
            char m_hOldAttached[0x4]; // 0x610            
            // metadata: MNetworkEnable
            bool m_bCheapEffect; // 0x614            
            uint8_t _pad0615[0x1b];
            
            // Datamap fields:
            // void m_hEffect; // 0x5f0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EntityFlame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EntityFlame) == 0x630);
    };
};
