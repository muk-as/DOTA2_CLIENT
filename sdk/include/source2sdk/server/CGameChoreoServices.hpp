#pragma once
#include "source2sdk/client/IChoreoServices.hpp"
#include "source2sdk/client/IChoreoServices__ChoreoState_t.hpp"
#include "source2sdk/client/IChoreoServices__ScriptState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseAnimGraph;
};

namespace source2sdk::server
{
    class CScriptedSequence;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    #pragma pack(push, 1)
    class CGameChoreoServices : public client::IChoreoServices
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimGraph> m_hOwner;
        char m_hOwner[0x4]; // 0x8        
        // m_hScriptedSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CScriptedSequence> m_hScriptedSequence;
        char m_hScriptedSequence[0x4]; // 0xc        
        client::IChoreoServices__ScriptState_t m_scriptState; // 0x10        
        client::IChoreoServices__ChoreoState_t m_choreoState; // 0x14        
        entity2::GameTime_t m_flTimeStartedState; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameChoreoServices because it is not a standard-layout class
    static_assert(sizeof(CGameChoreoServices) == 0x20);
};
