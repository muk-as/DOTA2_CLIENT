#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicLineToEntity : public server::CLogicalEntity
    {
    public:
        // m_Line has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<Vector> m_Line;
        char m_Line[0x28]; // 0x4b8        
        CUtlSymbolLarge m_SourceName; // 0x4e0        
        // m_StartEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_StartEntity;
        char m_StartEntity[0x4]; // 0x4e8        
        // m_EndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_EndEntity;
        char m_EndEntity[0x4]; // 0x4ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicLineToEntity because it is not a standard-layout class
    static_assert(sizeof(CLogicLineToEntity) == 0x4f0);
};
