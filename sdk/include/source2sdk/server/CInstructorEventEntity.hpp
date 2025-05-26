#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInstructorEventEntity : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4e0            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e8            
            // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hTargetPlayer;
            char m_hTargetPlayer[0x4]; // 0x4f0            
            uint8_t _pad04f4[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
            // void InputSetTargetPlayerToActivator; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInstructorEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInstructorEventEntity) == 0x4f8);
    };
};
