#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "source2sdk/client/PointTemplateOwnerSpawnGroupType_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointTemplate : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszWorldName; // 0x4e0            
            CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4e8            
            CUtlSymbolLarge m_iszEntityFilterName; // 0x4f0            
            float m_flTimeoutInterval; // 0x4f8            
            bool m_bAsynchronouslySpawnEntities; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            source2sdk::client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x500            
            source2sdk::client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x504            
            // m_createdSpawnGroupHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_createdSpawnGroupHandles;
            char m_createdSpawnGroupHandles[0x18]; // 0x508            
            // m_SpawnedEntityHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_SpawnedEntityHandles;
            char m_SpawnedEntityHandles[0x18]; // 0x520            
            HSCRIPT m_ScriptSpawnCallback; // 0x538            
            HSCRIPT m_ScriptCallbackScope; // 0x540            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointTemplate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointTemplate) == 0x548);
    };
};
