#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInstructorEventEntity : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x4b8        
        CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c0        
        // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hTargetPlayer;
        char m_hTargetPlayer[0x4]; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x4];
        
        // Datamap fields:
        // CUtlSymbolLarge InputShowHint; // 0x0
        // void InputEndHint; // 0x0
        // void InputSetTargetPlayerToActivator; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInstructorEventEntity because it is not a standard-layout class
    static_assert(sizeof(CInstructorEventEntity) == 0x4d0);
};
