#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicPlayerProxy : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_PlayerHasAmmo; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_PlayerHasNoAmmo; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_PlayerDied; // 0x_            
            // m_RequestedPlayerHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_RequestedPlayerHealth;
            char m_RequestedPlayerHealth[0x_]; // 0x_            
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPlayer;
            char m_hPlayer[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicPlayerProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicPlayerProxy) == 0x_);
    };
};
